#pragma strict

//Detect when ball hits walls (called by GameManeger.js)
function OnTriggerEnter2D (inf_hit : Collider2D) {

	if (inf_hit.name == "Ball"){

		var wall_name = transform.name;
		GameManager.fun_score (wall_name);
		//play score audio
		GetComponent.<AudioSource>().Play();
		inf_hit.gameObject.SendMessage ("ball_reset");
	}

}
