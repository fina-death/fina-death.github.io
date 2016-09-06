using UnityEngine;
using System.Collections;

public class Ball : MonoBehaviour {

	// Use this for initialization
	void Start () {
        this.GetComponent<Rigidbody>().velocity = new Vector3(-8.0f, 8.0f, 0.0f);
    }
	
    void OnBecameInvisible()
    {
        Destroy(gameObject);
    }
    private void OnCollisionEnter(Collision target)
    {
        if (target.gameObject.tag == "cube")
        {
            Destroy(gameObject);
        }
    }
}
