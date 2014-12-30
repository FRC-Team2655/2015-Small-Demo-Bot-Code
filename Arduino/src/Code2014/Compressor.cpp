/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2008. All Rights Reserved.							  */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in $(WIND_BASE)/WPILib.  */
/*----------------------------------------------------------------------------*/

#include "Compressor.h"

/**
 * Internal task.
 * 
 * Task which checks the compressor pressure switch and operates the MotorController as necessary
 * depending on the pressure.
 * 
 * Do not call this function directly.
 */
static void CompressorChecker(Compressor *c)
{
	while (1)
	{
		if (c->Enabled())
		{
			c->SetMotorControllerValue( c->GetPressureSwitchValue() == 0 ? MotorController::kOn : MotorController::kOff );
		}
		else
		{
			c->SetMotorControllerValue(MotorController::kOff);
		}
		//Wait(0.5);
	}
}

/**
 * Initialize the Compressor object.
 * This method is the common initialization code for all the constructors for the Compressor
 * object. It takes the MotorController channel and pressure switch channel and spawns a task that polls the
 * compressor and sensor.
 * 
 * You MUST start the compressor by calling the Start() method.
 */
// void Compressor::InitCompressor(uint8_t pressureSwitchModuleNumber,
// 		uint32_t pressureSwitchChannel,
// 		uint8_t compresssorMotorControllerModuleNumber,
// 		uint32_t compressorMotorControllerChannel)
// {
// 	//m_table = NULL;
// 	m_enabled = false;
// 	// m_pressureSwitch = new DigitalInput(pressureSwitchModuleNumber, pressureSwitchChannel);
// 	m_MotorController = new MotorController(compresssorMotorControllerModuleNumber, compressorMotorControllerChannel, MotorController::kForwardOnly);

// 	// if (!m_task.Start((int32_t)this))
// 	// {
// 	// 	wpi_setWPIError(CompressorTaskError);
// 	// }
// }

/**
 * Compressor constructor.
 * Given a fully specified MotorController channel and pressure switch channel, initialize the Compressor object.
 * 
 * You MUST start the compressor by calling the Start() method.
 * 
 * @param pressureSwitchModuleNumber The digital module that the pressure switch is attached to.
 * @param pressureSwitchChannel The GPIO channel that the pressure switch is attached to.
 * @param compresssorMotorControllerModuleNumber The digital module that the compressor MotorController is attached to.
 * @param compressorMotorControllerChannel The MotorController channel that the compressor MotorController is attached to.
 */
// Compressor::Compressor(uint8_t pressureSwitchModuleNumber,
// 		uint32_t pressureSwitchChannel,
// 		uint8_t compresssorMotorControllerModuleNumber,
// 		uint32_t compressorMotorControllerChannel)
// 	//: m_task ("Compressor", (FUNCPTR)CompressorChecker)
// {
// 	InitCompressor(pressureSwitchModuleNumber,
// 		pressureSwitchChannel,
// 		compresssorMotorControllerModuleNumber,
// 		compressorMotorControllerChannel);
// }

/**
 * Compressor constructor.
 * Given a MotorController channel and pressure switch channel (both in the default digital module), initialize
 * the Compressor object.
 * 
 * You MUST start the compressor by calling the Start() method.
 * 
 * @param pressureSwitchChannel The GPIO channel that the pressure switch is attached to.
 * @param compressorMotorControllerChannel The MotorController channel that the compressor MotorController is attached to.
 */
Compressor::Compressor(unsigned int pressureSwitchChannel, unsigned int compressorMotorControllerChannel)
	//: m_task ("Compressor", (FUNCPTR)CompressorChecker)
{
	// InitCompressor(GetDefaultDigitalModule(),
	// 		pressureSwitchChannel,
	// 		GetDefaultDigitalModule(),
	// 		compressorMotorControllerChannel);
}

/**
 * Delete the Compressor object.
 * Delete the allocated resources for the compressor and kill the compressor task that is polling
 * the pressure switch.
 */

/**
 * Operate the MotorController for the compressor.
 * Change the value of the MotorController output that is connected to the compressor motor.
 * This is only intended to be called by the internal polling thread.
 */
void Compressor::SetMotorControllerValue(MotorController::Value MotorControllerValue)
{
	m_MotorController->Set(MotorControllerValue);
}

/**
 * Get the pressure switch value.
 * Read the pressure switch digital input.
 * 
 * @return The current state of the pressure switch.
 */
uint32_t Compressor::GetPressureSwitchValue()
{
	// return m_pressureSwitch->Get();
	return 1;
}

/**
 * Start the compressor.
 * This method will allow the polling loop to actually operate the compressor. The
 * is stopped by default and won't operate until starting it.
 */
void Compressor::Start()
{
	m_enabled = true;
}

/**
 * Stop the compressor.
 * This method will stop the compressor from turning on.
 */
void Compressor::Stop()
{
	m_enabled = false;
}

/**
 * Get the state of the enabled flag.
 * Return the state of the enabled flag for the compressor and pressure switch
 * combination.
 * 
 * @return The state of the compressor thread's enable flag.
 */
bool Compressor::Enabled()
{
	return m_enabled;
}

void Compressor::Run() {
	CompressorChecker(this);
}