using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.SceneManagement;

public class ConnectToServer : MonoBehaviourPunCallbacks
{
    // Start is called before the first frame update

    public GameObject DebugText;
    public GameObject EnvironmentDet;

    private void Start()
    {
        PhotonNetwork.ConnectUsingSettings();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public override void OnConnectedToMaster()
    {
        PhotonNetwork.JoinLobby();
    }

    public override void OnJoinedLobby()
    {
        //SceneManager.LoadScene("Lobby");
        DebugText.GetComponent<TMPro.TextMeshPro>().text = "Joined Lobby";
        JoinRoom();


    }

    public void JoinRoom()
    {
        PhotonNetwork.JoinRoom("Holo");
    }

    public override void OnJoinedRoom()
    {
        DebugText.GetComponent<TMPro.TextMeshPro>().text = "Joined Room: Holo";
        EnvironmentDet.SetActive(true);

    }
}
