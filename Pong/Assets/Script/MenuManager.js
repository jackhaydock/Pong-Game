#pragma strict

//quit button (Hide in WebGL)
var obj_but_quit_main : GameObject;
var obj_but_quit_pause : GameObject;

//Menus
var obj_master: GameObject;
var obj_menus: GameObject;
var obj_menu_main: GameObject;
var obj_menu_pause: GameObject;
var obj_menu_pong: GameObject;
var obj_menu_super: GameObject;
var obj_menu_opt: GameObject;
var obj_menu_quit_m: GameObject;
var obj_menu_quit_d: GameObject;
var menu_prev: String = "none";

//Resolution Settings
var res_full_tog : UnityEngine.UI.Toggle;
var obj_full_tog : GameObject;
var res_w : int;
var res_h : int;

//audio
var lib_audio : GameObject;
var bgm_track : int = 0;
var track_txt : String = "Voice Over Under";

//Dificulty
var ai_dif : int = 3;
var ai_dif_txt : String = "Normal";
var obj_dif : GameObject;

//------------------------------------------------------------------------------------------------//
//Startup
//------------------------------------------------------------------------------------------------//
function Start () {

	//finds current resolution and fullscreen settings to set default displays in options menu
	start_findres();
	start_fullscreen();

	//Find and Load Menus based on scene and present objects
	start_menus();
	start_findscene();

	//Find audio
	start_findaudio();	
}


function Update () {
	//Hides elements in WebGL
	if (Application.platform == RuntimePlatform.WebGLPlayer){
		obj_but_quit_main.SetActive(false); //Quit to desktop
		obj_but_quit_pause.SetActive(false); //Quit to desktop
		obj_full_tog.SetActive(false); //Fullscreen
	}
}

function OnLevelWasLoaded() {

	Debug.Log("Application.loadedlevelname = " + Application.loadedLevelName);

	//Find _Master object
	if (GameObject.Find("_Master")) {
		obj_master = GameObject.Find("_Master");
	} else {
		Debug.Log("master not found");
	}
}


//------------------------------------------------------------------------------------------------//
//Menus
//------------------------------------------------------------------------------------------------//

//Find obj_menus object
function start_menus() {
	if (GameObject.Find("obj_menus")) {
	
		//Menus Object
		obj_menus = gameObject.Find("obj_menus");
		DontDestroyOnLoad(obj_menus.gameObject);

		//Main menu
		obj_menu_main = GameObject.Find("obj_menus/menu_main");
		
		//Pause menu
		obj_menu_pause = GameObject.Find("obj_menus/menu_pause");
	
		//Pong menu
		obj_menu_pong = GameObject.Find("obj_menus/menu_pong");

		//Superpong menu
		obj_menu_super = GameObject.Find("obj_menus/menu_super");

		//Options menu
		obj_menu_opt = GameObject.Find("obj_menus/menu_opt");

		//Quit to Menu menu
		obj_menu_quit_m = GameObject.Find("obj_menus/menu_quit_m");

		//Quit to Desktop menu
		obj_menu_quit_d = GameObject.Find("obj_menus/menu_quit_d");
		obj_but_quit_main = GameObject.Find("obj_menus/menu_main/but_quit");
		obj_but_quit_pause = GameObject.Find("obj_menus/menu_pause/but_quit_desk");

		//Difficulty Picker Objects
		obj_dif = GameObject.Find("obj_menus/menu_pause/obj_dif");

	} else {
		Debug.Log("obj_menus not found");
	}
}


//Checks name of current scene (for menu loading purposes)
function start_findscene() {
	if (Application.loadedLevelName == "Menu_Main") {
		//loads main menu
		menu_main();
	} else {
		obj_menu_main.SetActive(false);
		obj_menu_pause.SetActive(false);
		obj_menu_pong.SetActive(false);
		obj_menu_super.SetActive(false);
		obj_menu_opt.SetActive(false);
		obj_menu_quit_m.SetActive(false);
		obj_menu_quit_d.SetActive(false);
	}
}


//Main Menu
function menu_main () {
	obj_menu_main.SetActive(true);
	obj_menu_pause.SetActive(false);
	obj_menu_pong.SetActive(false);
	obj_menu_super.SetActive(false);
	obj_menu_opt.SetActive(false);
	obj_menu_quit_m.SetActive(false);
	obj_menu_quit_d.SetActive(false);
	menu_prev = "main";
}

//Pause Menu
function menu_pause () {
	obj_menu_main.SetActive(false);
	obj_menu_pause.SetActive(true);
	obj_menu_pong.SetActive(false);
	obj_menu_super.SetActive(false);
	obj_menu_opt.SetActive(false);
	obj_menu_quit_m.SetActive(false);
	obj_menu_quit_d.SetActive(false);
	menu_prev = "pause";

}


//Classic Mode Menu
function menu_pong () {
	obj_menu_main.SetActive(false);
	obj_menu_pause.SetActive(false);
	obj_menu_pong.SetActive(true);
	obj_menu_super.SetActive(false);
	obj_menu_opt.SetActive(false);
	obj_menu_quit_m.SetActive(false);
	obj_menu_quit_d.SetActive(false);
}


//SuperPong Mode Menu
function menu_super () {
	obj_menu_main.SetActive(false);
	obj_menu_pause.SetActive(false);
	obj_menu_pong.SetActive(false);
	obj_menu_super.SetActive(true);
	obj_menu_opt.SetActive(false);
	obj_menu_quit_m.SetActive(false);
	obj_menu_quit_d.SetActive(false);

}


//Options Menu
function menu_options () {
	obj_menu_main.SetActive(false);
	obj_menu_pause.SetActive(false);
	obj_menu_pong.SetActive(false);
	obj_menu_super.SetActive(false);
	obj_menu_opt.SetActive(true);
	obj_menu_quit_m.SetActive(false);
	obj_menu_quit_d.SetActive(false);
}


//Quit to Menu
function menu_quit_m () {
	obj_menu_main.SetActive(false);
	obj_menu_pause.SetActive(false);
	obj_menu_pong.SetActive(false);
	obj_menu_super.SetActive(false);
	obj_menu_opt.SetActive(false);
	obj_menu_quit_m.SetActive(true);
	obj_menu_quit_d.SetActive(false);
}

//Quit to Desktop
function menu_quit_d () {
	obj_menu_main.SetActive(false);
	obj_menu_pause.SetActive(false);
	obj_menu_pong.SetActive(false);
	obj_menu_super.SetActive(false);
	obj_menu_opt.SetActive(false);
	obj_menu_quit_m.SetActive(false);
	obj_menu_quit_d.SetActive(true);
}


//------------------------------------------------------------------------------------------------//
//Gamemodes
//------------------------------------------------------------------------------------------------//

//Pong----------------------------------------------------
function pong_single () {
	Application.LoadLevel("Classic_Single");

	//Hides all menus
	obj_menu_main.SetActive(false);
	obj_menu_pause.SetActive(false);
	obj_menu_pong.SetActive(false);
	obj_menu_super.SetActive(false);
	obj_menu_opt.SetActive(false);
	obj_menu_quit_m.SetActive(false);
	obj_menu_quit_d.SetActive(false);
}

function pong_multi () {
	Application.LoadLevel("Classic_Multi");

	//Hides all menus
	obj_menu_main.SetActive(false);
	obj_menu_pause.SetActive(false);
	obj_menu_pong.SetActive(false);
	obj_menu_super.SetActive(false);
	obj_menu_opt.SetActive(false);
	obj_menu_quit_m.SetActive(false);
	obj_menu_quit_d.SetActive(false);
}

//Super-------------------------------------
function super_single () {
	//Application.LoadLevel("Super_Single");

	//Hides all menus
	obj_menu_main.SetActive(false);
	obj_menu_pause.SetActive(false);
	obj_menu_pong.SetActive(false);
	obj_menu_super.SetActive(false);
	obj_menu_opt.SetActive(false);
	obj_menu_quit_m.SetActive(false);
	obj_menu_quit_d.SetActive(false);
}

function super_multi () {
	Application.LoadLevel("Super_Multi");

	//Hides all menus
	obj_menu_main.SetActive(false);
	obj_menu_pause.SetActive(false);
	obj_menu_pong.SetActive(false);
	obj_menu_super.SetActive(false);
	obj_menu_opt.SetActive(false);
	obj_menu_quit_m.SetActive(false);
	obj_menu_quit_d.SetActive(false);
}

//------------------------------------------------------------------------------------------------//
//Resolution
//------------------------------------------------------------------------------------------------//

//Set resolution variables
function start_findres() {
	obj_full_tog = GameObject.Find("/obj_menus/menu_opt/opt_res/res_tog");
	res_full_tog = obj_full_tog.GetComponent(UI.Toggle);
	res_w = Screen.width;
	res_h = Screen.height;
	//TODO------------------------------------------------------------
		//set text to display current resolution in input fields
	//TODO------------------------------------------------------------
}

//check if full screen
function start_fullscreen() {
	if(Screen.fullScreen == true) {
		res_full_tog.isOn = true;
	} else {
		res_full_tog.isOn = false;
	}
}

//custom width input
function res_w_input(){
	var w_input = GameObject.Find("/obj_menus/menu_opt/opt_res/input_w").GetComponent(UI.InputField).text;
	if (w_input == "") {
	} else {
		res_w = int.Parse(w_input);
	Debug.Log("Width: " + res_w);
	}
}
//custom height input
function res_h_input(){
	var h_input = GameObject.Find("/obj_menus/menu_opt/opt_res/input_h").GetComponent(UI.InputField).text;
	if (h_input == "") {
	} else {
		res_h = int.Parse(h_input);
	}
}

//Apply res
function res_apply () {
	res_w_input();
	res_h_input();
	Screen.SetResolution (res_w, res_h, res_full_tog.isOn);
	Debug.Log("Width: " + res_w);
	Debug.Log("Height: " + res_h);
	Debug.Log("Fullscreen: " + res_full_tog.isOn);
}

//------------------------------------------------------------------------------------------------//
//Pause, Reset and Quit
//------------------------------------------------------------------------------------------------//


//Pause
function game_pause () {
	if (obj_master.GetComponent(GameManager)) {
		obj_master.GetComponent(GameManager).game_pause();
	}
}

//Reset
function game_reset () {
	if (obj_master.GetComponent(GameManager)) {
		obj_master.GetComponent(GameManager).game_reset();
	}
}

//Quit to Menu
function quit_menu () {
	Application.LoadLevel("Menu_Main");
	obj_menu_quit_m.SetActive(false);
}

//Quit to Desktop
function quit_desk () {
	Application.Quit();
}

//Back to previous menu
function menu_back () {
	if (menu_prev == "main") {
		obj_menu_main.SetActive(true);
		obj_menu_pause.SetActive(false);
		obj_menu_pong.SetActive(false);
		obj_menu_super.SetActive(false);
		obj_menu_opt.SetActive(false);
		obj_menu_quit_m.SetActive(false);
		obj_menu_quit_d.SetActive(false);

	} else if (menu_prev == "pause") {
		obj_menu_main.SetActive(false);
		obj_menu_pause.SetActive(true);
		obj_menu_pong.SetActive(false);
		obj_menu_super.SetActive(false);
		obj_menu_opt.SetActive(false);
		obj_menu_quit_m.SetActive(false);
		obj_menu_quit_d.SetActive(false);
	}	
}

//------------------------------------------------------------------------------------------------//
//Audio Track Buttons
//------------------------------------------------------------------------------------------------//

function start_findaudio() {
	if (GameObject.Find("lib_audio")) {
		lib_audio = GameObject.Find("lib_audio");
	}
}

function track_up() {
	if (bgm_track < 2) {
		bgm_track = bgm_track + 1;
	} else {
		bgm_track = 0;
	}
	track_change();
}

function track_down() {
	if (bgm_track > 0) {
		bgm_track = bgm_track - 1;
	} else {
		bgm_track = 2;
	}
	track_change();
}

function track_change() {
	if (bgm_track == 0) {
		lib_audio.GetComponent(AudioManager).bgm_trackone();
		track_txt = "Voice Over Under";
	} else if (bgm_track == 1) {
		lib_audio.GetComponent(AudioManager).bgm_tracktwo();
		track_txt = "Cyborg Ninja";
	} else if (bgm_track == 2) {
		lib_audio.GetComponent(AudioManager).bgm_trackthree();
		track_txt = "Pixelland";
	}

	if (GameObject.Find("obj_menus")) {
		GameObject.Find("lbl_track_txt").GetComponent(UI.Text).text = track_txt;
	}
}


//------------------------------------------------------------------------------------------------//
//Difficulty
//------------------------------------------------------------------------------------------------//

//Increase Difficulty
function dif_up () {
	if (ai_dif < 6) {
		ai_dif = ai_dif + 1;
	} else {
		ai_dif = 0;
	}
	dif_txt();		
}

//Decrease Difficulty
function dif_down () {
	if (ai_dif > 0) {
		ai_dif = ai_dif - 1;
	} else {
		ai_dif = 6;
	}
	dif_txt();
}

//Change Text	
function dif_txt () {
	if (ai_dif == 0) {
		ai_dif_txt = "Toddler";
		dif_change(2);

	} else if (ai_dif == 1) {
		ai_dif_txt = "Very Easy";
		dif_change(1.8);

	} else if (ai_dif == 2) {
		ai_dif_txt = "Easy";
		dif_change(1.5);

	} else if (ai_dif == 3) {
		ai_dif_txt = "Normal";
		dif_change(1.2);

	} else if (ai_dif == 4) {

		ai_dif_txt = "Hard";
		dif_change(1);

	} else if (ai_dif == 5) {
		ai_dif_txt = "Very Hard";
		dif_change(0.5);


	} else if (ai_dif == 6) {
		ai_dif_txt = "Impossible";
		dif_change(0.2);

	}
	
	if (GameObject.Find("obj_menus")) {
		GameObject.Find("lbl_dif_txt").GetComponent(UI.Text).text = ai_dif_txt;
	} 

}

//Change AI difficulty
function dif_change(x) {
	if (GameObject.Find("Paddle_Right")) {
		GameObject.Find("Paddle_Right").GetComponent(AIControl).set_ai_dif(x);
	}
}

//Hide DIfiiculty settings in Multiplayer
function dif_hide() {
	if (Application.loadedLevelName != "Classic_Single") {
		if (GameObject.Find("obj_dif")) {
			obj_dif.SetActive(false);
			Debug.Log("MP");
		}
	} else {
			obj_dif.SetActive(true);
			Debug.Log("SP");
	}
}




