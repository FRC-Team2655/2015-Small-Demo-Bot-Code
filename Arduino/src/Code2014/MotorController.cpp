// Authored by Team Tuesday

/**
 * Note that the Talon uses the following bounds for PWM values. These values should work reasonably well for
 * most controllers, but if users experience issues such as asymmetric behavior around
 * the deadband or inability to saturate the controller in either direction, calibration is recommended.
 * The calibration procedure can be found in the Talon User Manual available from CTRE.
 * 
 *   - 211 = full "forward"
 *   - 133 = the "high end" of the deadband range
 *   - 129 = center of the deadband range (off)
 *   - 125 = the "low end" of the deadband range
 *   - 49 = full "reverse"
 */

#include "MotorController.h"

MotorControllerChannelTable rc_channel_table[4]; // = {1,2},{3,4},{5,6},{7,8};


MotorController::MotorController(uint32_t channel, MotorController::Direction direction)
	: m_channel (channel)
	, m_direction (direction)
{
	// InitMotorController(GetDefaultDigitalModule());
}

void MotorController::Set(MotorController::Value value)
{
	switch (value)
	{
	case kOff:
		if (m_direction == kBothDirections || m_direction == kForwardOnly)
		{
			// m_module->SetMotorControllerForward(m_channel, false);
		}
		if (m_direction == kBothDirections || m_direction == kReverseOnly)
		{
			// m_module->SetMotorControllerReverse(m_channel, false);
		}
		break;
	case kOn:
		if (m_direction == kBothDirections || m_direction == kForwardOnly)
		{
			// m_module->SetMotorControllerForward(m_channel, true);
		}
		if (m_direction == kBothDirections || m_direction == kReverseOnly)
		{
			// m_module->SetMotorControllerReverse(m_channel, true);
		}
		break;
	case kForward:
		if (m_direction == kReverseOnly)
		{
// 			Kick Blinky
			break;
		}
		if (m_direction == kBothDirections || m_direction == kForwardOnly)
		{
			// m_module->SetMotorControllerForward(m_channel, true);
		}
		if (m_direction == kBothDirections)
		{
			// m_module->SetMotorControllerReverse(m_channel, false);
		}
		break;
	case kReverse:
		if (m_direction == kForwardOnly)
		{
// 			Kick Blinky
			break;
		}
		if (m_direction == kBothDirections)
		{
			// m_module->SetMotorControllerForward(m_channel, false);
		}
		if (m_direction == kBothDirections || m_direction == kReverseOnly)
		{
			// m_module->SetMotorControllerReverse(m_channel, true);
		}
		break;
	}
}

MotorController::Value MotorController::Get() {
   if(1) {
	   if(1) {
		   return kOn;
	   } else {
		   if(m_direction == kForwardOnly) {
			   return kOn;
		   } else {
		   return kForward;
		   }
	   }
   } else {
	   if(1) {
		   if(m_direction == kReverseOnly) {
			   return kOn;
		   } else {
		   return kReverse;
		   }
	   } else {
		   return kOff;
	   }
   }        
}
