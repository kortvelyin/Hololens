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
        //public GameObject ntw;
        public GameObject cubeprf;
        private float nextActionTime = 0.0f;
        public float period = 5f;
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

       // public static Dictionary<int, GameObject> sceneObjectDict = new Dictionary<int, GameObject>();

        public List<Material> MeshMat = new List<Material>();
        public int matno = 0;

        TMPro.TextMeshPro myText;
       // private List<int> notUpdatedIds = new List<int>();

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
          
            
        var spatialAwarenessService = CoreServices.SpatialAwarenessSystem;
            // Cast to the IMixedRealityDataProviderAccess to get access to the data providers
            var dataProviderAccess = spatialAwarenessService as IMixedRealityDataProviderAccess;
            var meshObserver = dataProviderAccess.GetDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
           
            Debug.Log("im at the end of start");
            DebugText.GetComponent<TMPro.TextMeshPro>().text = "im at the end of start";
          // var idk= GetComponent<PhotonUser>().DictUpdate

        }

           
     
       



        void Update()
        {
            /*if (user.name == "User2")
                return;*/
            if (user == null)
                user = GameObject.Find("User1");

            if (user == null)
                return;
          
           
            if (!PhotonNetwork.IsConnected)
                return;

            if (!PhotonNetwork.InRoom)
                return;
            Mesh newMesh = cubeprf.GetComponent<MeshFilter>().sharedMesh;
            //user.GetComponent<PhotonUser>().DictUpdate(newMesh, transform.position, transform.rotation, 001);
            // user.GetComponent<PhotonUser>().InstantiateCube();

            if (Time.time > nextActionTime)
            {
                nextActionTime += period;

                if (once)
                {
                    var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();
                    //Debug.Log(observer.Name);
                    // DebugText.GetComponent<TMPro.TextMeshPro>().text = "in update " + count.ToString();
                    if (observer == null)
                        Debug.Log("we do not have an observer");
                    // Loop through all known Meshes

                  
                    user.GetComponent<PhotonUser>().ReloadList();

                   


                    foreach (var meshObject in observer.Meshes.Values)
                    {
                        
                        user.GetComponent<PhotonUser>().DictUpdate(meshObject.Filter.mesh, meshObject.GameObject.transform.position, meshObject.GameObject.transform.rotation, meshObject.Id);


                     }
                }
            }
        }

        
    }
}
