/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2008. All Rights Reserved.							  */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in $(WIND_BASE)/WPILib.  */
/*----------------------------------------------------------------------------*/

#ifndef COMPRESSOR_H_
#define COMPRESSOR_H_

#define COMPRESSOR_PRIORITY 90

#include "MotorController.h"


class DigitalInput;

/**
 * Compressor object.
 * The Compressor object is designed to handle the operation of the compressor, pressure sensor and
 * MotorController for a FIRST robot pneumatics system. The Compressor object starts a task which runs in the
 * backround and periodically polls the pressure sensor and operates the MotorController that controls the
 * compressor.
 */ 

class Compressor {
public:
	Compressor(unsigned int pressureSwitchChannel, unsigned int compressorMotorControllerChannel);


	void Run(); // honest john's task emulator

	void Start();
	void Stop();
	bool Enabled();
	uint32_t GetPressureSwitchValue();
	void SetMotorControllerValue(MotorController::Value MotorControllerValue);
	

private:
	// void InitCompressor(uint8_t pressureSwitchModuleNumber, uint32_t pressureSwitchChannel,
	// 			uint8_t compresssorMotorControllerModuleNumber, uint32_t compressorMotorControllerChannel);

	DigitalInput *m_pressureSwitch;
	MotorController *m_MotorController;
	bool m_enabled;
	// Task m_task;
	
};

#endif

