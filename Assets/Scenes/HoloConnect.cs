using System.Collections;
using System.Collections.Generic;
using Photon.Realtime;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;

public class HoloConnect : MonoBehaviourPunCallbacks
{
    public GameObject debug;
    // Start is called before the first frame update
    private void Start()
    {
        Debug.Log("Connecting to server");
        debug.GetComponent<TMPro.TextMeshPro>().text = "Connecting to server";
        PhotonNetwork.GameVersion = "0.0.1";
        PhotonNetwork.ConnectUsingSettings();
    }



    public override void OnConnectedToMaster()
    {
        Debug.Log("Connected to server");
        debug.GetComponent<TMPro.TextMeshPro>().text = "Connected to server";
    }

    public override void OnDisconnected(DisconnectCause cause)
    {
        Debug.Log("Disconnected from server for reason "+ cause.ToString());
        debug.GetComponent<TMPro.TextMeshPro>().text = "Disconnected from server for reason "+ cause.ToString();
    }
}
