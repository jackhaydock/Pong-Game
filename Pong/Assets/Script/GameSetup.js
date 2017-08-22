#pragma strict

var cam_main : Camera;

var wall_top : BoxCollider2D;
var wall_bottom : BoxCollider2D;
var wall_left : BoxCollider2D;
var wall_right : BoxCollider2D;

var plyr_left : Transform;
var plyr_right : Transform;


function Start () {
	plyr_reset();
}

function plyr_reset () {
	plyr_left.position.y = 0;
	plyr_right.position.y = 0;
}


function Update () {

	//move walls to edge
	wall_top.size = new Vector2 (cam_main.ScreenToWorldPoint (new Vector3 (Screen.width * 2f, 0f, 0f)).x, 1f);
	wall_top.offset = new Vector2 (0f, cam_main.ScreenToWorldPoint (new Vector3 (0f, Screen.height, 0f)).y + 0.5f);

	wall_bottom.size = new Vector2 (cam_main.ScreenToWorldPoint (new Vector3 (Screen.width * 2f, 0f, 0f)).x, 1f);
	wall_bottom.offset = new Vector2 (0f, cam_main.ScreenToWorldPoint (new Vector3 (0f, 0f, 0f)).y - 0.5f);

	wall_left.size = new Vector2 (1f, cam_main.ScreenToWorldPoint (new Vector3 (0f, Screen.height * 2f, 0f)).y);
	wall_left.offset = new Vector2 (cam_main.ScreenToWorldPoint (new Vector3 (0f, 0f, 0f)).x - 0.5f, 0f);

	wall_right.size = new Vector2 (1f, cam_main.ScreenToWorldPoint (new Vector3 (0f, Screen.height * 2f, 0f)).y);
	wall_right.offset = new Vector2 (cam_main.ScreenToWorldPoint (new Vector3 (Screen.width, 0f, 0f)).x + 0.5f, 0f);

	//player positions
	plyr_left.position.x = cam_main.ScreenToWorldPoint (new Vector3 (Screen.width/10, 0f, 0f)).x;
	plyr_right.position.x = cam_main.ScreenToWorldPoint (new Vector3 (Screen.width - Screen.width/10, 0f, 0f)).x;

}

