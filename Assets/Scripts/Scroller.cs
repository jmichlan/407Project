using System.Collections;
using UnityEngine;

public class Scroller : MonoBehaviour {

	public float speed = 0;
	
	// Update is called once per frame
	void Update () {

		GetComponent<Renderer>().material.mainTextureOffset = new Vector2(Time.time * speed, 0f);
		
	}
}
