#pragma strict

static var plyr_score_left : int = 0;
static var plyr_score_right : int = 0;

var skin_gui : GUISkin;

var trns_ball : Transform;

function Start(){
	trns_ball = GameObject.FindGameObjectWithTag ("Ball").transform;
}

//Change score when walls report detection (SideWalls.js)
static function fun_score (wall_name : String) {

	if (wall_name == "wall_right"){
		plyr_score_left += 1;
	}
	else if (wall_name == "wall_left"){
		plyr_score_right += 1;
	}
	else{
	}

}

//GUI
function OnGUI () {

	GUI.skin = skin_gui;
//Score
	GUI.Label (new Rect (Screen.width/2 -250, 20, 100, 100), "" + plyr_score_left);
	GUI.Label (new Rect (Screen.width/2 +150, 20, 100, 100), "" + plyr_score_right);
//Buttons
	if (GUI.Button ( new Rect (Screen.width - 100, 0, 100, 20), "Reset")) {
	plyr_score_left = 0;
	plyr_score_right = 0;
	trns_ball.gameObject.SendMessage ("ball_reset");
	}



}
