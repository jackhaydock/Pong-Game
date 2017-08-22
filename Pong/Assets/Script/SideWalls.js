#pragma strict

var lib_audio : GameObject;

function Start () {
	if (GameObject.Find("lib_audio")) {
		lib_audio = GameObject.Find("lib_audio");
	}
}

//Detect when ball hits walls (called by GameManeger.js)
function OnTriggerEnter2D (inf_hit : Collider2D) {

	if (inf_hit.name == "Ball"){

		var wall_name = transform.name;
		GameManager.fun_score (wall_name);
		//play score audio (AudioManager.js)
		if (GameObject.Find("lib_audio")) {
			lib_audio.GetComponent(AudioManager).aud_score_play();
		}
		inf_hit.gameObject.SendMessage ("ball_reset");
	}

}
