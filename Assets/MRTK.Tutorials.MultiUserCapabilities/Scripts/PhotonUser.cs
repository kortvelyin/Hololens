using Photon.Pun;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Experimental.SceneUnderstanding;
using System.Collections.Generic;
using UnityEngine.UI;

namespace MRTK.Tutorials.MultiUserCapabilities
{
    public class PhotonUser : MonoBehaviour
    {
        public static PhotonUser PhotonScript;
        private PhotonView pv;
        private string username;
        public GameObject DebugText;
        public GameObject cube;
        public GameObject env;
        public GameObject newGOforMesh;
        public static Dictionary<int, GameObject> sceneObjectDict = new Dictionary<int, GameObject>();
        public List<Material> MeshMat = new List<Material>();
        public int matno = 0;
        private List<int> notUpdatedIds = new List<int>();
        private Transform InstantiatedParent;

        public bool canInstantiate = true;
        
        int count = 0;
        private void Start()
        {
            pv = GetComponent<PhotonView>();

            if (!pv.IsMine) return;

            username = "User" + PhotonNetwork.NickName;
            pv.RPC("PunRPC_SetNickName", RpcTarget.AllBuffered, username);
            //PhotonNetwork.Instantiate(cube.name, transform.position, transform.rotation);
            DebugText = GameObject.Find("Title_Observer2");

            InstantiatedParent = GameObject.Find("Demo Parent").transform;

            DebugText.GetComponent<TMPro.TextMeshPro>().text = "connected";

            while(!PhotonNetwork.InRoom)
            {
                DebugText.GetComponent<TMPro.TextMeshPro>().text = "not in room";
            }
            DebugText.GetComponent<TMPro.TextMeshPro>().text = "in room:" +PhotonNetwork.CurrentRoom;
        }

        void Update()

        {
                
          

        }      
               
        public void DictUpdate(Mesh newMesh,Vector3 pos, Quaternion rot, int Id)
        {

            if (!PhotonNetwork.IsConnected)
                return;

            if (!PhotonNetwork.InRoom)
                return;


               
            DebugText.GetComponent<TMPro.TextMeshPro>().text = "reading mesh: " + sceneObjectDict.Count.ToString();
            if (sceneObjectDict.ContainsKey(Id) == false)
            {
                //Add 
                var gO = PhotonNetwork.InstantiateRoomObject(newGOforMesh.name,pos, rot);
                gO = Instantiate(newGOforMesh, pos, rot);
                gO.transform.parent = InstantiatedParent;
                Mesh mesh = newMesh;
                newGOforMesh.GetComponent<MeshFilter>().mesh = mesh;
                newGOforMesh.GetComponent<MeshRenderer>().material = MeshMat[matno];
                sceneObjectDict.Add(Id, gO);
                notUpdatedIds.Add(Id);
                if (matno == MeshMat.Count - 1)
                    matno = 0;
                else
                    matno++;
            }
            else
            {
                //Update
                if (newMesh.vertices != sceneObjectDict[Id].GetComponent<MeshFilter>().mesh.vertices)
                {
                    Mesh mesh = newMesh;
                    sceneObjectDict[Id].GetComponent<MeshFilter>().mesh = mesh;
                    sceneObjectDict[Id].transform.rotation = rot;
                    sceneObjectDict[Id].transform.position = pos;

                }
                notUpdatedIds.Remove(Id);

            }
                    
            // Remove
            foreach (int a in notUpdatedIds)
            {
                PhotonNetwork.Destroy(sceneObjectDict[a].gameObject);
                Destroy(sceneObjectDict[a].gameObject);
                sceneObjectDict.Remove(a);
            }

           
        }
            
        public void ReloadList()
        {
            if (!PhotonNetwork.IsConnected)
                return;

            if (!PhotonNetwork.InRoom)
                return;
            //Reload list of objects
            foreach (var obj in sceneObjectDict)
            {
                notUpdatedIds.Add(obj.Key);
            }
        }

        public void InstantiateCube()
        {
            Debug.Log("maybe created a cube");
            PhotonNetwork.Instantiate(cube.name, transform.position, transform.rotation);
            Debug.Log("did it work?");      
        }


        [PunRPC]
        private void PunRPC_SetNickName(string nName)
        {
            gameObject.name = nName;
        }

        [PunRPC]
        private void PunRPC_ShareAzureAnchorId(string anchorId)
        {
            GenericNetworkManager.Instance.azureAnchorId = anchorId;

            Debug.Log("\nPhotonUser.PunRPC_ShareAzureAnchorId()");
            Debug.Log("GenericNetworkManager.instance.azureAnchorId: " + GenericNetworkManager.Instance.azureAnchorId);
            Debug.Log("Azure Anchor ID shared by user: " + pv.Controller.UserId);
        }

        public void ShareAzureAnchorId()
        {
            if (pv != null)
                pv.RPC("PunRPC_ShareAzureAnchorId", RpcTarget.AllBuffered,
                    GenericNetworkManager.Instance.azureAnchorId);
            else
                Debug.LogError("PV is null");
        }
    }
}
