#pragma strict

var key_up : KeyCode;
var key_down: KeyCode;

var speed : float = 10;

//Move paddles up and down when appropriate keys pressed
function Update () {

	if (Input.GetKey(key_up)){
		GetComponent.<Rigidbody2D>().velocity.y = speed;
	}
	else if (Input.GetKey(key_down)){
		GetComponent.<Rigidbody2D>().velocity.y = speed * -1;
	}
	else{
		GetComponent.<Rigidbody2D>().velocity.y = 0;
	}

}
