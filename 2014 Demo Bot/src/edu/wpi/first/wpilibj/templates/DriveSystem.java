package edu.wpi.first.wpilibj.templates;
//Imports///////////////////////////////////////////////////////////////////////
import edu.wpi.first.wpilibj.Gyro;
import edu.wpi.first.wpilibj.RobotDrive;
import edu.wpi.first.wpilibj.smartdashboard.SmartDashboard;
////////////////////////////////////////////////////////////////////////////////
public class DriveSystem {
    private final TeamJoystick driveStick;
    private final Gyro gyro;
    private final Thread thread;
    private final RobotDrive mainDrive;
    
    private int driveMode;
    
    public DriveSystem(TeamJoystick driveStick){
    this.driveStick = driveStick;
    gyro = new Gyro(1);
    mainDrive = new RobotDrive(Ports.leftDriveMotor,Ports.rightDriveMotor);
    thread = new DriveSystemThread();
    thread.start();
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
    
    public void moveAutonomous(int move, int rotate){
        mainDrive.arcadeDrive(move, rotate);
    }
    
    class DriveModeEnum {
//      Possible states the robot can be in.  
        static final int Disabled = 0;
        static final int Autonomous = 1;
        static final int Teleop = 2;
        static final int Test = 3;
    }
        public void setAutonomous() {
//  Sets the drive mode to Autonomous.
        driveMode = DriveModeEnum.Autonomous;
    }

    public void setTeleop() {
//  Sets the drive mode to Teleop.        
        driveMode = DriveModeEnum.Teleop;
    }
}
