using Photon.Pun;
using Photon.Realtime;
using System.Collections.Generic;
using UnityEngine;

namespace MRTK.Tutorials.MultiUserCapabilities
{
    public class PhotonLobby : MonoBehaviourPunCallbacks
    {
        public static PhotonLobby Lobby;

        private int roomNumber = 1;
        private int userIdCount;
        // public GameObject scriptobj;
        private GameObject DebugText;

        private void Awake()
        {
            if (Lobby == null)
            {
                Lobby = this;
            }
            else
            {
                if (Lobby != this)
                {
                    Destroy(Lobby.gameObject);
                    Lobby = this;
                }
            }

            DontDestroyOnLoad(gameObject);

            GenericNetworkManager.OnReadyToStartNetwork += StartNetwork;

            DebugText = GameObject.Find("Title_Observer");
        }


        //public override void Room
        

        public override void OnConnectedToMaster()
        {
            var randomUserId = Random.Range(0, 999999);
            PhotonNetwork.AutomaticallySyncScene = true;
            PhotonNetwork.AuthValues = new AuthenticationValues();
            PhotonNetwork.AuthValues.UserId = randomUserId.ToString();
            userIdCount++;
            PhotonNetwork.NickName = PhotonNetwork.AuthValues.UserId;
            Debug.Log("connected to server");

            PhotonNetwork.JoinRoom("Holo");
           // PhotonNetwork.JoinLobby();


        }

        public override void OnJoinedLobby()
        {
            Debug.Log("joined lobby"+Lobby.name);
        }
        public override void OnRoomListUpdate(List<RoomInfo> roomList)
        {
            PhotonNetwork.JoinRoom("Holo");
            
            foreach (var room in roomList)
            DebugText.GetComponent<TMPro.TextMeshPro>().text = "list of rooms: "+ room.Name;

        }

        public override void OnJoinedRoom()
        {
            base.OnJoinedRoom();
            DebugText.GetComponent<TMPro.TextMeshPro>().text = "joined room";
            Debug.Log("\nPhotonLobby.OnJoinedRoom()");
            Debug.Log("Current room name: " + PhotonNetwork.CurrentRoom.Name);
            Debug.Log("Other players in room: " + PhotonNetwork.CountOfPlayersInRooms);
            Debug.Log("Total players in room: " + (PhotonNetwork.CountOfPlayersInRooms + 1));
        }

        public override void OnJoinRoomFailed(short returnCode, string message)
        {
            DebugText.GetComponent<TMPro.TextMeshPro>().text = "i couldnt join room";
            CreateRoom();
        }
        
        
        public override void OnCreateRoomFailed(short returnCode, string message)
        {
            Debug.Log("\nPhotonLobby.OnCreateRoomFailed()");
            Debug.LogError("Creating Room Failed");
            CreateRoom();
        }

        public override void OnCreatedRoom()
        {
            base.OnCreatedRoom();
            roomNumber++;
            Debug.Log("created room");
           //scriptobj.GetComponent<Environmentdetection>().

        }

        public void OnCancelButtonClicked()
        {
            PhotonNetwork.LeaveRoom();
        }

        private void StartNetwork()
        {
            PhotonNetwork.ConnectUsingSettings();
            Lobby = this;
        }

        private void CreateRoom()
        {
           var roomOptions = new RoomOptions {IsVisible = true, IsOpen = true, MaxPlayers = 10};
            PhotonNetwork.CreateRoom("Holo", roomOptions);

            //PhotonNetwork.CreateRoom("Room" + Random.Range(1, 3000), roomOptions);
        }
    }
}
