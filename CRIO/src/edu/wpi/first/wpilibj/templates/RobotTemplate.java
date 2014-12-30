package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.IterativeRobot;

public class RobotTemplate extends IterativeRobot {

    private DriveSystem driveSystem;
    private BallHandler BallHandler;
    private TeamJoystick joystick;
    private Button shootButton;
    private Button passButton;
    private Button liftButton;

    public void robotInit() {
        joystick = new TeamJoystick(1);
        shootButton = new Button(joystick, Global.shootButton);
        passButton = new Button(joystick, Global.passButton);
        liftButton = new Button(joystick, Global.liftButton);
        driveSystem = new DriveSystem(joystick);
    }

    public void teleopInit() {
        driveSystem.setTeleop();
    }

    public void teleopPeriodic() {
        if (shootButton.isPressed()) {
        } else if (liftButton.isPressed()) {
        }
    }

    public void disabledInit() {
        driveSystem.setDisabled();
    }
}
