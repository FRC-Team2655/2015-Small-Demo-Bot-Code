/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package edu.wpi.first.wpilibj.templates;

/**
 *
 * @author psiInterceptennettlewis
 */
// MUST CHANGE THE VALUES
public class Global {
//  DriveSystem
    public final static int driveIdleTime = 100; // in ms
//  Temperature slope psiSlope = (9mV/C)
//  y = mx + psiIntercept
    public final static double temperatureSlopeCompensation = 111.1111; // psiSlope
    public final static double temperatureOffset = (-252.7777);         // psiIntercept 

//  Joystick buttons
    public final static int shootButton = 1;
    public final static int passButton = 2;
    public final static int liftButton = 3;
    public final static int flywheelSpeedUpButton = 4;
    public final static int flywheelSpeedDownButton = 5;

// compressor constants
    public final static double psiSlope = 43.5;
    public final static double psiIntercept = (-21.75); // b
    public final static double wantedMinimumPSI = 115;
}
