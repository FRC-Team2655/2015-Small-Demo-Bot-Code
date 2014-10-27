#ifndef _ROBOT_H
#define _ROBOT_H

class Compressor;
class Radio;
class Relay;


class Robot {
private:
	Compressor *_compressor;
	Radio *_radio;
	Relay *_turretMotor;
	// 2 motor controllers for the wheels
	// a few more things to suck and shoot the ball

public:
	Robot(Radio*radio);

	void run();
};

#endif // _ROBOT_H