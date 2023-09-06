#include "main.h"
#include "robot/globals.hpp"
#include <string>

void opcontrol() {
  // This is preference to what you like to drive on.
  chassis.set_drive_brake(MOTOR_BRAKE_COAST);

  bool clampState = true;

  while (true) {

    chassis.tank(); // Tank control
    // chassis.arcade_standard(ez::SPLIT); // Standard split arcade
    // chassis.arcade_standard(ez::SINGLE); // Standard single arcade
    // chassis.arcade_flipped(ez::SPLIT); // Flipped split arcade
    // chassis.arcade_flipped(ez::SINGLE); // Flipped single arcade

    //shlurp Control
    if (master.get_digital(E_CONTROLLER_DIGITAL_R2)) {
      shlurp.move_velocity(100);
    }
    else {
      shlurp.move_velocity(0);
    }

    //lift control
    if (master.get_digital(DIGITAL_L2)){
      lift.move_velocity(100);
    }else if (master.get_digital(DIGITAL_L1)){
      lift.move_velocity(-100);
    }else{
      lift.move_velocity(0);
    }

    //clamp control
    // if (master.get_digital_new_press(DIGITAL_R1)){
    //   leftWing.set_value(true);
    //   rightWing.set_value(true);
    // }

    if (master.get_digital_new_press(DIGITAL_R1)){
      clampState = !clampState;
      clamp.set_value(clampState);
    }
    // . . .
    // Put more user control code here!
    // . . .

    pros::delay(ez::util::DELAY_TIME); // This is used for timer calculations!  Keep this ez::util::DELAY_TIME
  }
}