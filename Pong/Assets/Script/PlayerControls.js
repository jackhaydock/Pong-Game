#pragma strict

var key_up : KeyCode;
var key_down: KeyCode;
var key_right : KeyCode;
var key_left: KeyCode;

var speed : float = 10;

var r_targ = new Vector3(0, 0, 0);

//Move paddles up and down when appropriate keys pressed
function Update () {

//Vertical Movement
	if (Input.GetKey(key_up)){
		GetComponent.<Rigidbody2D>().velocity.y = speed;
	} else if (Input.GetKey(key_down)){
		GetComponent.<Rigidbody2D>().velocity.y = speed * -1;
	} else{
		GetComponent.<Rigidbody2D>().velocity.y = 0;
	}

//Rotation
	if (Application.loadedLevelName == "Super_Multi") {
		//Turn Right(Clockwise)
		if (Input.GetKey(key_right)){
				GetComponent.<Rigidbody2D>().transform.Rotate(-Vector3.forward, speed * 30 * Time.deltaTime);
		//Turn Left(C-Clockwise)
		} else if (Input.GetKey(key_left)){
			GetComponent.<Rigidbody2D>().transform.Rotate(Vector3.forward, speed * 30 * Time.deltaTime);
		//Return to upright position
		} else {
			var r_true : System.Boolean = true;
						
//----
//FIX THIS! (Decide which direction to rotate based on current rotation)
//----
			if (Vector3.Distance(transform.eulerAngles, Vector3(0, 0, 0))
			 < Vector3.Distance(transform.eulerAngles, Vector3(0, 0, 180))) {
				r_targ = new Vector3(0, 0, 0);
				Debug.Log("Up");
			} else {
				r_targ = new Vector3(0, 0, 180);
				Debug.Log("Down");
			}

			if (r_true) {
        			if (Vector3.Distance(transform.eulerAngles, r_targ) > 0.01f) {
             				transform.eulerAngles = Vector3.Lerp(transform.rotation.eulerAngles, r_targ, Time.deltaTime * 2);
        			} else {
            				transform.eulerAngles = r_targ;
             				r_true = false;
         			}
    			}			
		}
	}

Debug.Log("1: " + Vector3.Distance(transform.eulerAngles, Vector3(0, 0, 0)));
Debug.Log("2: " + Vector3.Distance(transform.eulerAngles, Vector3(0, 0, 180)));
}
