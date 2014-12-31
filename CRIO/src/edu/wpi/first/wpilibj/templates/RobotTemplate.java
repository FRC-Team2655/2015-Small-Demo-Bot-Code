package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.IterativeRobot;

public class RobotTemplate extends IterativeRobot {

    private DriveSystem driveSystem;
    private BallHandler BallHandler;
    private TeamJoystick joystick;
    //suspension?

    private Button shootButton;
    private Button suspensionButton;
    private Button flywheelSpeedUpButton;
    private Button flywheelSpeedDownButton;

    public void robotInit() {
        driveSystem = new DriveSystem(joystick);

        joystick = new TeamJoystick(1);

        shootButton = new Button(joystick, Global.shootButton);
        suspensionButton = new Button(joystick, Global.liftButton);
        flywheelSpeedUpButton = new Button(joystick, Global.flywheelSpeedUpButton);
        flywheelSpeedDownButton = new Button(joystick, Global.flywheelSpeedDownButton);
    }

    public void teleopInit() {
        driveSystem.setTeleop();
    }

    public void teleopPeriodic() {
        if (shootButton.theButtonToggled()) {
            BallHandler.shoot();
        }
        if (suspensionButton.theButtonToggled()) {
           //Merr?
        }
        if (flywheelSpeedUpButton.theButtonToggled()) {
            BallHandler.flyWheel.spinUp();
        }
        if (flywheelSpeedDownButton.theButtonToggled()) {
            BallHandler.flyWheel.spinDown();
        }
    }

    public void disabledInit() {
        driveSystem.setDisabled();
    }
}
