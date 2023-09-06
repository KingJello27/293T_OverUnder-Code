#include "main.h"
#include "echolib/graphics/GraphicalUserInterface.hpp"
#include <string>

void initialize() {


    // Configure your chassis controls
    chassis.toggle_modify_curve_with_controller(true); // Enables modifying the controller curve with buttons on the joysticks
    chassis.set_active_brake(0); // Sets the active brake kP. We recommend 0.1.
    chassis.set_curve_default(0, 0); // Defaults for curve. If using tank, only the first parameter is used. (Comment this line out if you have an SD card!)  
    default_constants(); // Set the drive to your own constants from autons.cpp!

    // These are already defaulted to these buttons, but you can change the left/right curve buttons here!
    // chassis.set_left_curve_buttons (pros::E_CONTROLLER_DIGITAL_LEFT, pros::E_CONTROLLER_DIGITAL_RIGHT); // If using tank, only the left side is used. 
    // chassis.set_right_curve_buttons(pros::E_CONTROLLER_DIGITAL_Y,    pros::E_CONTROLLER_DIGITAL_A);

    // Initialize chassis and auton selector
    chassis.initialize();
    ez::as::initialize();
}



/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {
  // . . .
}



/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {
  // . . .
}