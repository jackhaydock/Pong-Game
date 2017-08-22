#pragma strict

var obj_ball : GameObject;

var speed : float = 10;
var ai_dif : float = 1.2;


//------------------------------------------------------------------------------------------------//
//Startup
//------------------------------------------------------------------------------------------------//

function Start () {
	if (GameObject.Find("Ball")) {
		obj_ball = GameObject.Find("Ball");
	}
}

function Update () {

	if (GameObject.Find("Ball")) {

		var pos_paddle = GetComponent.<Rigidbody2D>().transform.position.y;
		var pos_ball = obj_ball.transform.position.y;
		
		if (obj_ball.transform.position.x >= 0) {

			if (pos_ball > pos_paddle + ai_dif){
				GetComponent.<Rigidbody2D>().velocity.y = speed;
			} else if (pos_ball < pos_paddle - ai_dif){
				GetComponent.<Rigidbody2D>().velocity.y = speed * -1;		
			} else {
				GetComponent.<Rigidbody2D>().velocity.y = 0;
			}

		} else if (obj_ball.transform.position.x < 0) {

			if (pos_ball > pos_paddle + ai_dif * 2){
				GetComponent.<Rigidbody2D>().velocity.y = speed/2;
			} else if (pos_ball < pos_paddle - ai_dif * 2){
				GetComponent.<Rigidbody2D>().velocity.y = speed/2 * -1;		
			} else {
				GetComponent.<Rigidbody2D>().velocity.y = 0;
			}
		}
	}
}


//------------------------------------------------------------------------------------------------//
//Difficulty
//------------------------------------------------------------------------------------------------//

function set_ai_dif (x) {
	ai_dif = x;
}
