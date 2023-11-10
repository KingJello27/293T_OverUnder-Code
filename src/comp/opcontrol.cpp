#include "main.h"
#include "robot/globals.hpp"
#include <string>

void opcontrol() {
  // This is preference to what you like to drive on.
  chassis.set_drive_brake(MOTOR_BRAKE_COAST);

  bool wingState = false;

  wings.set_value(wingState);

  while (true) {

    chassis.tank(); // Tank control
    // chassis.arcade_standard(ez::SPLIT); // Standard split arcade
    // chassis.arcade_standard(ez::SINGLE); // Standard single arcade
    // chassis.arcade_flipped(ez::SPLIT); // Flipped split arcade
    // chassis.arcade_flipped(ez::SINGLE); // Flipped single arcade

    //Wing Control
    if (controller.get_digital_new_press(DIGITAL_R1)){
      wingState = !wingState;
      wings.set_value(wingState);
    }
  }  
}