using UnityEngine;
using System.Collections;

public class PLAY : MonoBehaviour {
    private float jump_speed = 10.0f;
    public bool is_land = false;
	// Use this for initialization
	void Start () {
        
	}
	
	// Update is called once per frame
	void Update () {
        if (is_land == true)
        {
            if (Input.GetMouseButtonDown(0))
            {
                is_land = false;
                this.gameObject.GetComponent<Rigidbody>().velocity = Vector3.up * jump_speed;
            }
        }
	}
    private void OnCollisionEnter(Collision target)
    {
        if (target.gameObject.tag == "plane")
        {
            is_land = true;
        }
    }
}
