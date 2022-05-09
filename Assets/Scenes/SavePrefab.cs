using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Windows;

public class SavePrefab : MonoBehaviour
{
    // Start is called before the first frame update

    private float nextActionTime = 0.0f;
    public float period = 50f;
    bool prefabSuccess;
    private Transform InstantiatedParent;
    void Start()
    {
        //to save scene Meshes
        InstantiatedParent = GameObject.Find("Demo Parent").transform;
        if (!Directory.Exists("Assets/Prefabs"))
            AssetDatabase.CreateFolder("Assets", "Prefabs");
    }

    // Update is called once per frame
    void Update()
    {
        if (Time.time > nextActionTime)
        {
            nextActionTime += period;

            if (InstantiatedParent.childCount > 2)
            {
                string localPath = "Assets/Prefabs/" + InstantiatedParent.name + ".prefab";
                localPath = AssetDatabase.GenerateUniqueAssetPath(localPath);

                PrefabUtility.SaveAsPrefabAsset(gameObject, localPath, out prefabSuccess);
                if (prefabSuccess == true)
                    Debug.Log("Prefab was saved successfully");
                else
                    Debug.Log("Prefab failed to save" + prefabSuccess);
            }

        }

    }
}
