using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleGravity : MonoBehaviour {
	
	private Rigidbody2D rb2d;

	// Use this for initialization
	void Start () {
		rb2d = GetComponent<Rigidbody2D> ();
		//Physics.gravity = 1;
		print (rb2d.gravityScale);
		
	}
	
	// Update is called once per frame
	void Update () {
		if(Input.GetKeyDown(KeyCode.Space))
		{
			//Physics.gravity = Physics2D.gravity * -1;
			rb2d.gravityScale *= -1;
			print (rb2d.gravityScale);
			print ("space pressed");
		}

	}
}
