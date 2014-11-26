//Button.cpp
//Sample button class for the Companion^4 controller
//Transcribed by Joshua Hutchins @ 11/25/14 meeting, written by majority of the team

class Button{
	private:
	bool last_state = false;
	int pinNum;
	bool current_state = false;

	Button(pin_number){ //Constructor, for those who are newer, it's literally used to "construct" each individual clone of this blueprint.
		last_state = false;
		pinNum = pin_number;
		pinmode(pinNum, OUTPUT);
	}	

	public:
	bool isPushed(){

		return current_state;
	}

	bool getCurrentState(){ //redundancy... argument for another night. :P
		return current_state;
	}

	bool toggled(){

		return current_state != last_state; //return true if values are different, false if they are the same
	}

	void read_the_pin(){
		last_state = current_state; //update the last_state BEFORE re-getting the current_state
		current_state = digitalRead(pin_number);
	}
}