#ifndef MotorController_H_
#define MotorController_H_

#include <arduino.h>

class MotorController  {
public:
	typedef enum {kOff, kOn, kForward, kReverse} Value;
	typedef enum {kBothDirections, kForwardOnly, kReverseOnly} Direction;

	MotorController(uint32_t channel, Direction direction = kBothDirections);
	
    Value Get();
	
	void Set(Value value);
private:
	// void InitMotorController(uint8_t moduleNumber);

	uint32_t m_channel;
	Direction m_direction;
};

class MotorControllerChannelTable {
public:
	MotorControllerChannelTable() {};
	int forward_pin;
	int reverse_pin;
};

//= {{1,2},{3,4},{5,6},{7,8}};

#endif
