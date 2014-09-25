package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.IterativeRobot;


public class RobotTemplate extends IterativeRobot {
    private DriveSystem driveSystem;
    private BallHandler ballHandler;
    private TeamJoystick teamJoystick;
    public void robotInit() {
        teamJoystick = new TeamJoystick(Global.driveStick);
        
        driveSystem = new DriveSystem(teamJoystick);
        ballHandler = new BallHandler();
    }

//    public void autonomousInit(){
//    driveSystem.setAutonomous();
//    } 
    
//    public void autonomousPeriodic() {
//
//    }

    public void teleopInit(){
    driveSystem.setTeleop();
    }
    
    public void teleopPeriodic() {
        
    }
    
//    public void testPeriodic() {
//    
//    }
    
}
