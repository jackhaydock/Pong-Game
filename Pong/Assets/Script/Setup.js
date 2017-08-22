#pragma strict

function Start () {
	AudioListener.pause = true;
	yield WaitForSeconds (2.5);
	AudioListener.pause = false;
	if (GameObject.Find("lib_audio")) {
		var script_am = GameObject.Find("lib_audio").GetComponent(AudioManager);
		var aud_vol = 0.8;
		script_am.aud_hit.volume = aud_vol;
		script_am.aud_score.volume = aud_vol;
		script_am.aud_bgm_one.volume = aud_vol;
		script_am.aud_bgm_two.volume = aud_vol;
		script_am.aud_bgm_three.volume = aud_vol;
	}

	Application.LoadLevel("Menu_Main");
}
