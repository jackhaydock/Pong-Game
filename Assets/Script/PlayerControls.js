#pragma strict

var move_up : KeyCode;
var move_down: KeyCode;

var speed : float = 10;

//Move paddles up and down when appropriate keys pressed
function Update () {

	if (Input.GetKey(move_up)){
		GetComponent.<Rigidbody2D>().velocity.y = speed;
	}
	else if (Input.GetKey(move_down)){
		GetComponent.<Rigidbody2D>().velocity.y = speed * -1;
	}
	else{
		GetComponent.<Rigidbody2D>().velocity.y = 0;
	}

}
