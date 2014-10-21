package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.Talon;
import edu.wpi.first.wpilibj.Relay;
import edu.wpi.first.wpilibj.Solenoid;

public class Shooter {

    private final Talon launcher;
////////////////////////////////////////////////////////////////////////////////
    private final Talon aimer;
////////////////////////////////////////////////////////////////////////////////
    private final Solenoid ballLifter;

    public Shooter() {
        aimer = new Talon(Ports.aimMotorChannel);

        launcher = new Talon(Ports.shooterMotorChannel);

        ballLifter = new Solenoid(Ports.ballLifterChannel);
    }

    public void launcherOn() {
        launcher.set(1);
    }

    public void launcherOff() {
        launcher.set(0);
    }
}
