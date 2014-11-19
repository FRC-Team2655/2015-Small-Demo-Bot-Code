#ifndef MotorController_H_
#define MotorController_H_

#include <arduino.h>

/**
 * Class for Spike style MotorController outputs.
 * MotorControllers are intended to be connected to spikes or similar MotorControllers. The MotorController channels controls
 * a pair of pins that are either both off, one on, the other on, or both on. This translates into
 * two spike outputs at 0v, one at 12v and one at 0v, one at 0v and the other at 12v, or two 
 * spike outputs at 12V. This allows off, full forward, or full reverse control of motors without
 * variable speed.  It also allows the two channels (forward and reverse) to be used independently
 * for something that does not care about voltage polatiry (like a solenoid).
 */
class MotorController  {
public:
	typedef enum {kOff, kOn, kForward, kReverse} Value;
	typedef enum {kBothDirections, kForwardOnly, kReverseOnly} Direction;

	MotorController(uint32_t channel, Direction direction = kBothDirections);
	// MotorController(uint8_t moduleNumber, uint32_t channel, Direction direction = kBothDirections);
	// virtual ~MotorController();

	void Set(Value value);
	// Value Get();
	
	// void ValueChanged(ITable* source, const std::string& key, EntryValue value, bool isNew);
	// void UpdateTable();
	// void StartLiveWindowMode();
	// void StopLiveWindowMode();
	// std::string GetSmartDashboardType();
	// void InitTable(ITable *subTable);
	// ITable * GetTable();
	
	// ITable *m_table;

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
