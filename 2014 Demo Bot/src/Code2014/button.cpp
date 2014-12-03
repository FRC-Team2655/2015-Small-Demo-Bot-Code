//Button.cpp
//Sample button class for the Companion^4 controller
//Transcribed by Joshua Hutchins @ 11/25/14 meeting
// Updated the next day by John Bate

#include <arduino.h>
#include "Button.h"

// I love one liners.....
// ...but what does it all mean? See if you can figure it all out

Button::Button(int pinNumber) : lastState(false), currentState(false), pinNum(pinNumber) {
	pinMode(pinNum, INPUT);
}
// What's with the upperAndLower case names?
int Button::getPinNum() {
	return pinNum;
}
// What's the "::" mean?
bool Button::isPushed() {
	return currentState;
}
// what does the "!" mean?
bool Button::isNotPushed() {
	return !isPushed();
}
bool Button::getState() {
	return currentState;
}
bool Button::toggled() {
	return currentState != lastState;
}
bool Button::wasPushed() {
	// how is this different than isPushed() ?
	return (currentState && (currentState != lastState) );
}
bool Button::anotherWasPushed() {
	// how is this different than wasPushed() ?
	return isPushed() && toggled();
}
bool Button::wasReleased() {
	// wait, BUG ALERT -- didn't you forget the parenthesis?
	// Why? How is this different than the one above?
	return !currentState && currentState != lastState;
}
// need to tell the button to update it's memory
// before doing any other actions.
// you can do this once per loop.
void Button::readIt() {
	lastState = currentState;
	currentState = digitalRead(pinNum);
}