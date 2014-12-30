/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
// Author Zephan
package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.RobotDrive;

public class DriveSystem {

    private final TeamJoystick driveStick;
    private final Thread thread;
    private final RobotDrive mainDrive;

    private int driveMode;

    class DriveModeEnum {
//      Possible states the robot can be in.  

        static final int Disabled = 0;
        static final int Autonomous = 1;
        static final int Teleop = 2;
        static final int Test = 3;
    }

    private class DriveSystemThread extends Thread {

        public DriveSystemThread() {

        }

        public void run() {
//      Runs... Forever  
            while (true) {

                try {
                    if (driveMode == DriveModeEnum.Teleop) {
                        // If the robot is in teleop it will accept input from the joysticks.
                        mainDrive.arcadeDrive(driveStick.getAxis(TeamJoystick.AxisType.kZ), driveStick.getAxis(TeamJoystick.AxisType.kY));
                    } else {
                    }
                    Thread.sleep(Global.driveIdleTime);
                } catch (InterruptedException ex) {
                }

            }
        }

    }

    public DriveSystem(TeamJoystick driveStick) {
        this.driveStick = driveStick;
        driveMode = DriveModeEnum.Disabled;
        mainDrive = new RobotDrive(Ports.leftMotorChannel, Ports.rightMotorChannel);
        thread = new DriveSystemThread();
        thread.start();
    }

    public void setDisabled() {
//  Sets the drive mode to Disabled.        
        driveMode = DriveModeEnum.Disabled;

    }

    public void setAutonomous() {
//  Sets the drive mode to Autonomous.
        driveMode = DriveModeEnum.Autonomous;

    }

    public void setTeleop() {
//  Sets the drive mode to Teleop.        
        driveMode = DriveModeEnum.Teleop;

    }

    public void setTest() {
//  Sets the drive mode to Teleop.        
        driveMode = DriveModeEnum.Test;

    }
}
