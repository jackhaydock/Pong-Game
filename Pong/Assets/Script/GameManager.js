#pragma strict

var obj_menus: GameObject;

static var plyr_score_left : int = 0;
static var plyr_score_right : int = 0;
var score_left_txt: UI.Text;
var score_right_txt: UI.Text;

var skin_gui : GUISkin;

var trns_ball : Transform;

var gui_menu : System.Boolean;
var game_mute : System.Boolean;

//Keycodes
var key_reset: KeyCode;
var key_pause: KeyCode;

//------------------------------------------------------------------------------------------------//
//Startup
//------------------------------------------------------------------------------------------------//

function Start(){
	trns_ball = GameObject.FindGameObjectWithTag ("Ball").transform;

	//find score gameobjects
	if (GameObject.Find("GUI/gui_game/score_left")) {
		score_left_txt = GameObject.Find("GUI/gui_game/score_left").GetComponent(UI.Text);
	}
	if (GameObject.Find("GUI/gui_game/score_right")) {
		score_right_txt = GameObject.Find("GUI/gui_game/score_right").GetComponent(UI.Text);
	}

	//Find obj_menus object
	if (GameObject.Find("obj_menus")) {
		obj_menus = GameObject.Find("obj_menus");
	} else {
		Debug.Log("obj_menus not found");
	}
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

function Update () {
	//Keys (Reset)
	if (Input.GetKeyDown(key_pause)) {
		game_pause();
	}

	//Keys (Reset)
	if (Input.GetKeyDown(key_reset)) {
		game_reset();
	}

//Score
	if (GameObject.Find("GUI/gui_game/score_left")) {
		score_left_txt.text = plyr_score_left.ToString();
	}
	if (GameObject.Find("GUI/gui_game/score_right")) {
		score_right_txt.text = plyr_score_right.ToString();
	}
}


//------------------------------------------------------------------------------------------------//
//Pause, Reset and Quit
//------------------------------------------------------------------------------------------------//

//Pause function
function game_pause () {
	if (Time.timeScale == 1) {
		obj_menus.GetComponent(MenuManager).menu_pause();
		Time.timeScale = 0;
	}else {	
		obj_menus.GetComponent(MenuManager).obj_menu_pause.SetActive(false);
		obj_menus.GetComponent(MenuManager).obj_menu_opt.SetActive(false);
		obj_menus.GetComponent(MenuManager).obj_menu_quit_m.SetActive(false);
		obj_menus.GetComponent(MenuManager).obj_menu_quit_d.SetActive(false);
		Time.timeScale = 1;
		}
}

//Reset Function
function game_reset () {
	plyr_score_left = 0;
	plyr_score_right = 0;
	trns_ball.gameObject.SendMessage ("ball_reset");
	BroadcastMessage ("plyr_reset");
}

//Quit Function
function game_quit () {
	Application.LoadLevel ("Menu_Main");
}	
