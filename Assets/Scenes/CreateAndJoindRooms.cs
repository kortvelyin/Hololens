using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class CreateAndJoindRooms : MonoBehaviourPunCallbacks
{
    public InputField createInput;
    public InputField joinInput;
    public GameObject DebugText;
    public GameObject EnvironmentDet;

    private void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
        Debug.Log("Connect to smt");
    }
    public void CreateRoom()
    {
        PhotonNetwork.CreateRoom("Holo");
       // EnvironmentDet.SetActive(true);
        Debug.Log("created room?");
    }
    public override void OnConnectedToMaster()
    {
        //CreateRoom();
        //PhotonNetwork.JoinLobby();
        Debug.Log("Connected to server");
    }

    /*void IMatchmakingCallbacks.OnJoinedRoom()
    {
        // joined a room successfully
    }
    */
    public override void OnJoinedLobby()
    {
        //SceneManager.LoadScene("Lobby");
        DebugText.GetComponent<TMPro.TextMeshPro>().text = "Joined Lobby";
        CreateRoom();
       
        Debug.Log("About to create room");


    }
    public void JoinRoom()
    {
        PhotonNetwork.JoinRoom(joinInput.text);
    }

    public override void OnJoinedRoom()
    {
        DebugText.GetComponent<TMPro.TextMeshPro>().text = "Joined Room un Creqate";
    }
}
