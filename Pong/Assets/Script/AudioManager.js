#pragma strict

var aud_bgm_one: AudioSource;
var aud_bgm_two: AudioSource;
var aud_bgm_three: AudioSource;
var aud_hit: AudioSource;
var aud_score: AudioSource;

var bgm_track: int;

var sldr_bgm: UI.Slider;
var sldr_sfx: UI.Slider;

//------------------------------------------------------------------------------------------------//
//Startup
//------------------------------------------------------------------------------------------------//

function Awake () {
	//checks if lib_audio is present
	if (GameObject.Find("lib_audio")) {
		DontDestroyOnLoad(GameObject.Find("lib_audio"));
		aud_bgm_one = GameObject.Find("bgm_vou").GetComponent(AudioSource);
		aud_bgm_two = GameObject.Find("bgm_cyborg").GetComponent(AudioSource);
		aud_bgm_three = GameObject.Find("bgm_pixel").GetComponent(AudioSource);		
		aud_hit = GameObject.Find("sfx_hit").GetComponent(AudioSource);
		aud_score = GameObject.Find("sfx_score").GetComponent(AudioSource);		
	} else {
		Debug.Log("lib_audio not found");
	}
}

function Update () {
	if (GameObject.Find("lib_audio")) {
		if (bgm_track == 0) {
			bgm_track = 1;
		} else if (bgm_track == 1) {
			aud_bgm_two.Stop();
			aud_bgm_three.Stop();
			if (!aud_bgm_one.isPlaying) {
				aud_bgm_one.Play();
			}
		} else if (bgm_track == 2) {
			aud_bgm_one.Stop();
			aud_bgm_three.Stop();
			if (!aud_bgm_two.isPlaying) {
				aud_bgm_two.Play();
			}
		} else if (bgm_track == 3) {
			aud_bgm_one.Stop();
			aud_bgm_two.Stop();
			if (!aud_bgm_three.isPlaying) {
				aud_bgm_three.Play();
			}
		}
	}
}

function OnLevelWasLoaded() {

	//Finds sldr_aud_bgm, if it exists, and assigns it to sldr_bgm	
	if (GameObject.Find("menu_opt/opt_aud/sldr_bgm")) {
		sldr_bgm = GameObject.Find("menu_opt/opt_aud/sldr_bgm").GetComponent(UI.Slider);
		sldr_bgm.onValueChanged.AddListener(vol_bgm_change) ;
	}

	//Finds sldr_aud_sfx, if it exists, and assigns it to sldr_sfx	
	if (GameObject.Find("menu_opt/opt_aud/sldr_sfx")) {
		sldr_sfx = GameObject.Find("menu_opt/opt_aud/sldr_sfx").GetComponent(UI.Slider);
		sldr_sfx.onValueChanged.AddListener(vol_sfx_change) ;
	}
}

//------------------------------------------------------------------------------------------------//
//Menu Options
//------------------------------------------------------------------------------------------------//

//Changes volume of BGM based on slider
function vol_bgm_change(){
	if (GameObject.Find("lib_audio")) {
		aud_bgm_one.volume = sldr_bgm.value;
		aud_bgm_two.volume = sldr_bgm.value;
		aud_bgm_three.volume = sldr_bgm.value;
	}
}

//Changes volume of SFX based on slider
function vol_sfx_change(){
	if (GameObject.Find("lib_audio")) {
		aud_hit.volume = sldr_sfx.value;
		aud_score.volume = sldr_sfx.value;
		if (!aud_score.isPlaying) {
			aud_score.Play();
		}
	}
}

function bgm_trackone() {
	if (GameObject.Find("lib_audio")) {
		bgm_track = 1;
		aud_bgm_one.Stop();
		aud_bgm_two.Stop();
		aud_bgm_three.Stop();
		Debug.Log("Track: VOU");
	}
}

function bgm_tracktwo() {
	if (GameObject.Find("lib_audio")) {
		bgm_track = 2;
		aud_bgm_one.Stop();
		aud_bgm_two.Stop();
		aud_bgm_three.Stop();
		Debug.Log("Track: cyborg");
	}
}

function bgm_trackthree() {
	if (GameObject.Find("lib_audio")) {
		bgm_track = 3;
		aud_bgm_one.Stop();
		aud_bgm_two.Stop();
		aud_bgm_three.Stop();
		Debug.Log("Track: pixel");
	}
}

//------------------------------------------------------------------------------------------------//
//In game use
//------------------------------------------------------------------------------------------------//

//play hit audio (BallControl.js)
function aud_hit_play (x) {
	//stops game freezing if audiosources aren't found
	if (GameObject.Find("lib_audio")) {
		aud_hit.pitch = x;
		aud_hit.Play();
	}
}

//play score audio (SideWalls.js)
function aud_score_play () {
	//stops game freezing if audiosources aren't found
	if (GameObject.Find("lib_audio")) {
		aud_score.Play();
		Debug.Log("score");
	}
}
