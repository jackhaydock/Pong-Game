#pragma strict

var ball_speed : float = 100;
var ball_pitch : float = 1;

var vel_corr1 : float = 18;
var vel_corr2 : float = 18;

//waits 2 seconds then triggers the ball movement
function Start (){
	ball_reset();
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

//resets the ball
function ball_reset () {
	GetComponent.<Rigidbody2D>().velocity.x = 0;
	GetComponent.<Rigidbody2D>().velocity.y = 0;
	transform.position.x = 0;
	transform.position.y = 0;
	yield WaitForSeconds (1);
	ball_start();
}

//sends the ball in a random direction
function ball_start () {
	var num_random = Random.Range(0, 2);
	
	if (num_random >= 1) {
		GetComponent.<Rigidbody2D>().AddForce(new Vector2 (ball_speed, 10));
	}
	else {
		GetComponent.<Rigidbody2D>().AddForce(new Vector2(-ball_speed, -10));
	}
}

//ball collision with paddle
function OnCollisionEnter2D (inf_coll : Collision2D) {
	var num_randir = Random.Range(-2, 2);
	if (inf_coll.collider.tag == "Player") {

//change velocity based on velocity of paddle and random num
		GetComponent.<Rigidbody2D>().velocity.y = GetComponent.<Rigidbody2D>().velocity.y/2 + inf_coll.collider.GetComponent.<Rigidbody2D>().velocity.y/3 + num_randir;

//Set pitch based on velocity of ball and paddle + random num
		GetComponent.<AudioSource>().pitch = (ball_pitch + Random.Range(-0.1, 0.1)+ (((GetComponent.<Rigidbody2D>().velocity.magnitude / 2) + (inf_coll.collider.GetComponent.<Rigidbody2D>().velocity.magnitude / 3)) / 20));

//Play hit audio
		GetComponent.<AudioSource>().Play();
	}
}

