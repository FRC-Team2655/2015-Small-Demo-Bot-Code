package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.DoubleSolenoid;

/**
 *
 * @author Zephan
 */
public class Lifter {

    TeamDoubleSolenoid lifter;
    TeamTimer timer;

    Lifter() {
        lifter = new TeamDoubleSolenoid(Ports.SM.ch1, Ports.SM.ch2);
        lifter.set(DoubleSolenoid.Value.kOff);
        timer = new TeamTimer();
    }

    public void lift() {
        lifter.set(DoubleSolenoid.Value.kForward);
        TeamTimer.delay(100);
        lifter.set(DoubleSolenoid.Value.kOff);
    }

    public void lower() {
        lifter.set(DoubleSolenoid.Value.kReverse);
        TeamTimer.delay(100);
        lifter.set(DoubleSolenoid.Value.kOff);
    }
}
