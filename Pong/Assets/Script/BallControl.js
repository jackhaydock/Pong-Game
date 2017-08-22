#pragma strict

var ball_speed : float = 100;
var plyr_vel : float = 0;

var vel_corr1 : float = 18;
var vel_corr2 : float = 18;

var skin_gui : GUISkin;

var ball_cd : UI.Text;

var lib_audio : GameObject;

//------------------------------------------------------------------------------------------------//
//Startup
//------------------------------------------------------------------------------------------------//

function Start (){
	//Finds text object for ball countdown
	if (GameObject.Find("/GUI/gui_game/gui_cd")) {
		ball_cd = (GameObject.Find("/GUI/gui_game/gui_cd").GetComponent(UI.Text));
		ball_cd.text = "";
	} else {
		Debug.Log("gui_cd not found");
	}

	//slight delay to allow system to setup
	yield WaitForSeconds (0.1);
	ball_reset();
	
	//find audio lib
	if (GameObject.Find("lib_audio")) {
		lib_audio = GameObject.Find("lib_audio");
	}
}

function Update () {
//Stops balls moving extremely slowly
	var vel_x : float = GetComponent.<Rigidbody2D>().velocity.x;
	if ((vel_x < vel_corr1) && (vel_x > - vel_corr1) && (vel_x != 0)) {
		if (vel_x > 0){
			GetComponent.<Rigidbody2D>().velocity.x = vel_corr2;
		}
		else{
			GetComponent.<Rigidbody2D>().velocity.x = - vel_corr2;
		}
	}
}

//------------------------------------------------------------------------------------------------//
//Ball Control
//------------------------------------------------------------------------------------------------//

//resets the ball
function ball_reset () {
	GetComponent.<Rigidbody2D>().velocity.x = 0;
	GetComponent.<Rigidbody2D>().velocity.y = 0;
	transform.position.x = 0;
	transform.position.y = 0;
	if (GameObject.Find("/GUI/gui_game/gui_cd")) {
		ball_cd.text = "3";
		yield WaitForSeconds (0.8);
		ball_cd.text = "2";
		yield WaitForSeconds (0.8);
		ball_cd.text = "1";
		yield WaitForSeconds (0.8);
		ball_cd.text = "";
	} else {
		Debug.Log("problem with ball_cd");
		yield WaitForSeconds (2);
	}
	ball_start();
}

//sends the ball in a random direction
function ball_start () {
	var num_random = Random.Range(0, 2);
	
	if (num_random == 1) {
		GetComponent.<Rigidbody2D>().AddForce(new Vector2 (ball_speed, Random.Range(-10, 10)));
	}
	else {
		GetComponent.<Rigidbody2D>().AddForce(new Vector2(-ball_speed, Random.Range(-10, 10)));
	}
}

//ball collision with paddle
function OnCollisionEnter2D (inf_coll : Collision2D) {
	var num_randir = Random.Range(-2, 2);
	if (inf_coll.collider.tag == "Player") {

//change ball velocity based on velocity of paddle and random num
		GetComponent.<Rigidbody2D>().velocity.y = GetComponent.<Rigidbody2D>().velocity.y/2 + inf_coll.collider.GetComponent.<Rigidbody2D>().velocity.y/3 + num_randir;

//Changes audio pitch based on paddle and ball speed
		var x : float = 0.5;
		var y : float = (Random.Range(-10, 11));
		var z : float = ((GetComponent.<Rigidbody2D>().velocity.magnitude / 2) + (inf_coll.collider.GetComponent.<Rigidbody2D>().velocity.magnitude / 3));
		var ball_pitch = x + y/100 + z/10;

//Play hit audio (AudioManager.js)
		if (GameObject.Find("lib_audio")) {
			lib_audio.GetComponent(AudioManager).aud_hit_play(ball_pitch);
		}
	}

}

