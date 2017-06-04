#pragma strict

static var plyr_score_left : int = 0;
static var plyr_score_right : int = 0;

var skin_gui : GUISkin;

var trns_ball : Transform;

var gui_menu : System.Boolean;
var game_mute : System.Boolean;

//Keycodes
var key_pause: KeyCode;
var key_reset: KeyCode;

var str_pause: String;
var str_mute: String;

function Start(){
	trns_ball = GameObject.FindGameObjectWithTag ("Ball").transform;
	
	str_pause = "Pause";
	str_mute = "Mute";
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

//Keys (Pause and Reset)
function Update () {
	if (Input.GetKeyDown(key_pause)) {
		game_pause();
	}

	if (Input.GetKeyDown(key_reset)) {
		game_reset();
	}
}

//GUI
function OnGUI () {

	GUI.skin = skin_gui;
//Score
	GUI.Label (new Rect (Screen.width/2 -150, 20, 0, 10), "" + plyr_score_left);
	GUI.Label (new Rect (Screen.width/2 +150, 20, 0, 10), "" + plyr_score_right);

//Menu Toggle
	if (GUI.Button ( new Rect (Screen.width - 80, 0, 80, 20), "Menu")) {
		if (gui_menu == false) {
			gui_menu = true;
		} else {
			gui_menu = false;
		}
	}
//Menu
	if (gui_menu == true) {
		//Pause
		if (GUI.Button ( new Rect (Screen.width - 80, 20, 80, 20), str_pause)) {
		game_pause();
		}
		//Reset
		if (GUI.Button ( new Rect (Screen.width - 80, 40, 80, 20), "Reset")) {
		game_reset();
		}
		//Mute
		if (GUI.Button ( new Rect (Screen.width - 80, 60, 80, 20), str_mute)) {
			game_mute = ! game_mute;
     			AudioListener.volume =  game_mute ? 0 : 1;
			if (str_mute == "Mute") {
				str_mute = "Unmute";
			}
			else {
				str_mute = "Mute";
			}
		}
		//Quit
		if (GUI.Button ( new Rect (Screen.width - 80, 80, 80, 20), "Quit")) {
		game_quit();
		}
	}

}



//Pause Function
function game_pause () {
	if (Time.timeScale == 1) {
			Time.timeScale = 0;
			str_pause = "Play";
		}
		else {
			Time.timeScale = 1;
			str_pause = "Pause";
		}
}

//Reset Function
function game_reset () {
		plyr_score_left = 0;
		plyr_score_right = 0;
		trns_ball.gameObject.SendMessage ("ball_reset");
		BroadcastMessage ("plyr_reset");
		Time.timeScale = 1;
}

//Quit Function
function game_quit () {
		Application.Quit();
	}

