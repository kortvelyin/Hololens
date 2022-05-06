using Microsoft.MixedReality.Toolkit.Examples.Demos;
using Microsoft.MixedReality.Toolkit.Experimental.SpatialAwareness;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
//using Microsoft.MixedReality.Toolkit.WindowsMixedReality.Editor;
using Microsoft.MixedReality.Toolkit.UI;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Photon.Pun;
//using Microsoft.MixedReality.Toolkit.SpatialAwareness.Utilities;
using SpatialAwarenessHandler = Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessObservationHandler<Microsoft.MixedReality.Toolkit.SpatialAwareness.SpatialAwarenessMeshObject>;
using MRTK.Tutorials.MultiUserCapabilities;



namespace Microsoft.MixedReality.Toolkit.Experimental.SceneUnderstanding
{

    public class Environmentdetection : DemoSpatialMeshHandler, SpatialAwarenessHandler

    {
        public GameObject user;
        public static Environmentdetection envscript;
        public GameObject ntw;
        public GameObject cubeprf;
        private float nextActionTime = 0.0f;
        public float period = 0.5f;
        public GameObject newGOforMesh;
        public bool once = true;
        //public Button button;
        public GameObject DebugText;
        [SerializeField]
        private bool InstantiatePrefabs = false;
        [SerializeField]
        private GameObject InstantiatedPrefab = null;
        [SerializeField]
        private Transform InstantiatedParent = null;
        public bool canInstantiate = true;
        public GameObject gO;

        //private IMixedRealitySceneUnderstandingObserver observer;

        private List<GameObject> instantiatedPrefabs;

        public static Dictionary<int, GameObject> sceneObjectDict = new Dictionary<int, GameObject>();

        public List<Material> MeshMat = new List<Material>();
        public int matno = 0;

        TMPro.TextMeshPro myText;
        private List<int> notUpdatedIds = new List<int>();

        public SpatialAwarenessMeshObject meshObject;
        public IMixedRealitySpatialAwarenessMeshObserver observer;
        int count = 0;
        // Start is called before the first frame update
        protected override void Start()
        {
           // myText = button.GetComponent<TMPro.TextMeshPro>();
           if (DebugText!= null)
            DebugText.GetComponent<TMPro.TextMeshPro>().text = "the script is working!";
           else
                DebugText = GameObject.Find("Title_Observer");
            observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();

            if (InstantiatedParent == null)
                InstantiatedParent = GameObject.Find("Demo Parent").transform;
            //bool onserver =ntw.GetComponent<Photon Lobby>

            // instantiatedPrefabs = new List<GameObject>();

            // Use CoreServices to quickly get access to the IMixedRealitySpatialAwarenessSystem
            var spatialAwarenessService = CoreServices.SpatialAwarenessSystem;
            // Cast to the IMixedRealityDataProviderAccess to get access to the data providers
            var dataProviderAccess = spatialAwarenessService as IMixedRealityDataProviderAccess;
            var meshObserver = dataProviderAccess.GetDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
           // DebugText = GameObject.Find("Title_Observer");
                //gameObject.FindChild("Title_Observer")
            // Get the first Mesh Observer available, generally we have only one registered
            //var meshObserver = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();

            // Get the SpatialObjectMeshObserver specifically
            //var meshObserverName = "Spatial Object Mesh Observer";
            // var spatialObjectMeshObserver = dataProviderAccess.GetDataProvider<IMixedRealitySpatialAwarenessMeshObserver>(meshObserverName);
            // var observers = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
            Debug.Log("im at the end of start");
            DebugText.GetComponent<TMPro.TextMeshPro>().text = "im at the end of start";
          // var idk= GetComponent<PhotonUser>().DictUpdate

        }

        #region notworking
       /* protected override void OnEnable()
        {
            Debug.Log("in on enable");
           
            await new WaitUntil(() => MixedRealityToolkit.SpatialAwarenessSystem != null);
            MixedRealityToolkit.SpatialAwarenessSystem.Register(gameObject);
            DebugText.GetComponent<TMPro.TextMeshPro>().text = "the script is working!2";
            DebugText.GetComponent<TMPro.TextMeshPro>().text = "the script onenable";
            //myText.text = "the script onenable";
            // Register component to listen for Mesh Observation events, typically done in OnEnable()
           CoreServices.SpatialAwarenessSystem.RegisterHandler<SpatialAwarenessHandler>(this);
            Debug.Log("spa neve: "+CoreServices.SpatialAwarenessSystem.Name);
            Debug.Log(this);
            DebugText.GetComponent<TMPro.TextMeshPro>().text = "subscribed";
            //var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
            //var obs2 = CoreServices.SpatialAwarenessSystem;
        }*/
      /*  
        protected override void OnDisable()
        {
           // DebugText.GetComponent<TMPro.TextMeshPro>().text = "the script onDisable";
            //myText.text = "the script onDisable";
            CoreServices.SpatialAwarenessSystem.UnregisterHandler<SpatialAwarenessHandler>(this);
        }

        protected override void OnDestroy()
        {
           // CoreServices.SpatialAwarenessSystem.UnregisterHandler<SpatialAwarenessHandler>(this);
        }
      */
        public void OnObservationAdded(MixedRealitySpatialAwarenessEventData<SpatialAwarenessSceneObject> eventData)
        {
            // This method called everytime a SceneObject created by the SU observer
            // The eventData contains everything you need do something useful


          //  Debug.Log("added something and legth of dict is: "+sceneObjectDict.Count);
            DebugText.GetComponent<TMPro.TextMeshPro>().text = "added something and length of dict is: " + sceneObjectDict.Count;
           
            InstantiatedPrefab = Instantiate(eventData.SpatialObject.GameObject, InstantiatedParent);
                sceneObjectDict.Add(eventData.Id, InstantiatedPrefab);
                sceneObjectDict[eventData.Id].GetComponent<MeshRenderer>().material = MeshMat[matno];
            
                if (matno == MeshMat.Count - 1)
                    matno = 0;
                else
                    matno++;
           
            

           
                /* foreach (var quad in eventData.SpatialObject.Quads)
                 {
                     quad.GameObject.GetComponent<Renderer>().material.color = ColorForSurfaceType(eventData.SpatialObject.SurfaceType);
                 }*/

           
        }


        /// <inheritdoc />
        public void OnObservationUpdated(MixedRealitySpatialAwarenessEventData<SpatialAwarenessSceneObject> eventData)
        {

            if (sceneObjectDict.ContainsKey(eventData.Id))
            {
                Debug.Log("updated something and legth of dict is: " + sceneObjectDict.Count);
                DebugText.GetComponent<TMPro.TextMeshPro>().text = "updated something and legth of dict is: " + sceneObjectDict.Count;
               
                sceneObjectDict[eventData.Id] = eventData.SpatialObject.GameObject;
                sceneObjectDict[eventData.Id].GetComponent<MeshRenderer>().material = MeshMat[matno];
                if (matno == MeshMat.Count - 1)
                    matno = 0;
                else
                    matno++;
            }
            else
            {
                Debug.Log("added something in update and legth of dict is: " + sceneObjectDict.Count);
                DebugText.GetComponent<TMPro.TextMeshPro>().text = "added something in update and legth of dict is: " + sceneObjectDict.Count;
                
                InstantiatedPrefab = Instantiate(eventData.SpatialObject.GameObject, InstantiatedParent);
                sceneObjectDict.Add(eventData.Id, InstantiatedPrefab);
                sceneObjectDict[eventData.Id].GetComponent<MeshRenderer>().material = MeshMat[matno];
                if (matno == MeshMat.Count - 1)
                    matno = 0;
                else
                    matno++;
            }    
           
        }


        /// <inheritdoc />
        public void OnObservationRemoved(MixedRealitySpatialAwarenessEventData<SpatialAwarenessSceneObject> eventData)
        {
            Debug.Log("removed something and legth of dict is: " + sceneObjectDict.Count);
            DebugText.GetComponent<TMPro.TextMeshProUGUI>().text = "removed something in update and legth of dict is: " + sceneObjectDict.Count;
            
            Destroy(sceneObjectDict[eventData.Id]);
            sceneObjectDict.Remove(eventData.Id);
        }


        #endregion notworking



        //  Save(Microsoft.MixedReality.Toolkit.SpatialAwareness.IMixedRealitySpatialAwarenessMeshObserver meshObserver, string folderPath, bool consolidate = true);

        // Update is called once per frame
        void Update()

        {

            
            if (!PhotonNetwork.IsConnected)
                return;

            if (!PhotonNetwork.InRoom)
                return;

            user.GetComponent<PhotonUser>().InstantiateCube();
            

            if (Time.time > nextActionTime)
            {
                nextActionTime += period; 
               
                if (once)
                {
                    var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
                    // Get the first Mesh Observer available, generally we have only one registered
                    //var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
                    Debug.Log(observer.Name);
                    // DebugText.GetComponent<TMPro.TextMeshPro>().text = "in update " + count.ToString();
                    if (observer == null)
                        Debug.Log("we do not have an observer");
                    /* else
                         Debug.Log("we might have an observer"+ observer.Name);*/
                    // if (observer!=null)
                    // Loop through all known Meshes
                    foreach( var obj in sceneObjectDict)
                    {
                        notUpdatedIds.Add(obj.Key);
                    }

                    

                    foreach (var meshObject in observer.Meshes.Values)
                    {

                        
                        count++;
                        DebugText.GetComponent<TMPro.TextMeshPro>().text = "reading mesh: " +sceneObjectDict.Count.ToString();
                        if (sceneObjectDict.ContainsKey(meshObject.Id) == false)
                        {
                            //Add 
                            gO =  PhotonNetwork.Instantiate(newGOforMesh.name, meshObject.GameObject.transform.position, meshObject.GameObject.transform.rotation);
                            gO.transform.parent = InstantiatedParent;
                            //gO = Instantiate(newGOforMesh, InstantiatedParent);
                            Mesh mesh = meshObject.Filter.mesh;
                            newGOforMesh.GetComponent<MeshFilter>().mesh = mesh;
                            newGOforMesh.GetComponent<MeshRenderer>().material = MeshMat[matno];
                            //newGOforMesh.transform.rotation = meshObject.GameObject.transform.rotation;
                            //newGOforMesh.transform.position = meshObject.GameObject.transform.position;
                            sceneObjectDict.Add(meshObject.Id, gO);
                            notUpdatedIds.Add(meshObject.Id);
                            if (matno == MeshMat.Count - 1)
                                matno = 0;
                            else
                                matno++;
                        }
                        else
                        {
                            //Update
                            if(meshObject.Filter.mesh.vertices!= sceneObjectDict[meshObject.Id].GetComponent<MeshFilter>().mesh.vertices)
                            {
                            Mesh mesh = meshObject.Filter.mesh;
                            sceneObjectDict[meshObject.Id].GetComponent<MeshFilter>().mesh = mesh;
                            sceneObjectDict[meshObject.Id].transform.rotation= meshObject.GameObject.transform.rotation;
                            sceneObjectDict[meshObject.Id].transform.position = meshObject.GameObject.transform.position;

                            }
                            notUpdatedIds.Remove(meshObject.Id);

                        }


                        /*if (count > 100)
                            once = false;*/
                    }
                    // Remove
                    foreach (int a in notUpdatedIds)
                    {
                        PhotonNetwork.Destroy(sceneObjectDict[a].gameObject);
                        Destroy(sceneObjectDict[a].gameObject);
                        sceneObjectDict.Remove(a);
                    }
                }
            }
              }

        
    }
}
