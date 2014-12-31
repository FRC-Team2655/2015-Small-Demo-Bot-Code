package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.DoubleSolenoid;

/**
 *
 * @author Zephan
 */
public class Lifter {

    TeamDoubleSolenoid lifter;

    Lifter() {
        lifter = new TeamDoubleSolenoid(Ports.SM.ch1, Ports.SM.ch2);
        lifter.set(DoubleSolenoid.Value.kOff);
    }

    public void lift() {
        lifter.set(DoubleSolenoid.Value.kForward);
    }

    public void lower() {
        lifter.set(DoubleSolenoid.Value.kReverse);
    }
}
