//Button.h
//Sample button class for the Companion^4 controller
//Transcribed by Joshua Hutchins @ 11/25/14 meeting

#include <arduino.h>

class Button{

	private:
		int pinNum;
		bool lastState, currentState;

	public:
	
		//Constructor, for those who are newer, 
		//it's literally used to "construct" each individual clone of this blueprint.
		// constructors have to be public for others to use them
		Button(int pin_number);

		int getPinNum();
		bool isPushed();
		bool isNotPushed();

		//redundancy... argument for another night. :P
		bool getState();

		//return true if someone pushed or released the button
		bool toggled();

		// return true only if someone pushed the button
		// slightly different than isPushed()
		bool wasPushed();
		bool anotherWasPushed();
		
		// return true only if someone released the button
		bool wasReleased();

		// read the button
		void readIt();
}