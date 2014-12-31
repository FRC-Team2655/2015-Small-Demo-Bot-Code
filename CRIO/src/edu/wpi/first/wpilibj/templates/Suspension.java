/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package edu.wpi.first.wpilibj.templates;

import edu.wpi.first.wpilibj.DoubleSolenoid;

/**
 *
 * @author Josh
 */

//NOT SURE IF THIS IS GONNA WORK
public class Suspension {
    TeamDoubleSolenoid lifter;
    TeamTimer timer;

    public Suspension() {
        lifter = new TeamDoubleSolenoid(Ports.suspensionSolenoidForwardChannel, Ports.suspensionSolenoidReverseChannel);
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
