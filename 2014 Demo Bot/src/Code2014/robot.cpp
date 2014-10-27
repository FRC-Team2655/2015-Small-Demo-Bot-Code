#include <arduino.h>
#include "robot.h"
#include "Compressor.h"


Robot::Robot(Radio *radio) : _radio(radio) {
	Serial.println("Robot::Robot entered");

	_compressor = new Compressor(1,2);
	_compressor->Start();
}

void Robot::run() {
	_compressor->Run();
}