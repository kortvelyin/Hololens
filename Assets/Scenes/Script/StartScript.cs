using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class StartScript : MonoBehaviourPunCallbacks
{

    public GameObject scriptobj;
    public override void OnCreatedRoom()
    {
        base.OnCreatedRoom();
       //this.GetComponent<Environment>
        Debug.Log("created room");
        //scriptobj.Environmentdetection.CanInstantiate = true;

    }
}
