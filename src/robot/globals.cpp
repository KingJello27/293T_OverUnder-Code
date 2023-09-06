#include "main.h"

//Controller
Controller master(E_CONTROLLER_MASTER);

//Motors
Motor leftFront(7, E_MOTOR_GEARSET_06, true, E_MOTOR_ENCODER_DEGREES); 
Motor leftMiddle(8, E_MOTOR_GEARSET_06, false, E_MOTOR_ENCODER_DEGREES); 
Motor leftBack(9, E_MOTOR_GEARSET_06, true, E_MOTOR_ENCODER_DEGREES); 
Motor rightFront(3, E_MOTOR_GEARSET_06, false, E_MOTOR_ENCODER_DEGREES); 
Motor rightMiddle(4, E_MOTOR_GEARSET_06, true, E_MOTOR_ENCODER_DEGREES); 
Motor rightBack(6, E_MOTOR_GEARSET_06, false, E_MOTOR_ENCODER_DEGREES); 

Motor shlurp(5, E_MOTOR_GEARSET_06, true, E_MOTOR_ENCODER_DEGREES); 
Motor lift(2, E_MOTOR_GEARSET_36, true, E_MOTOR_ENCODER_DEGREES); 

Motor motors[8] = {leftFront, leftMiddle, leftBack, rightFront, rightMiddle, rightBack, shlurp, lift};

//Pneumatics
pros::ADIDigitalOut leftWing('A');
pros::ADIDigitalOut rightWing('B');
pros::ADIDigitalOut clamp('C');

// Chassis constructor
Drive chassis (
  // Left Chassis Ports (negative port will reverse it!)
  //   the first port is the sensored port (when trackers are not used!)
  {-1, -2, -3}

  // Right Chassis Ports (negative port will reverse it!)
  //   the first port is the sensored port (when trackers are not used!)
  ,{10, 9, 8}

  // IMU Port
  ,20

  // Wheel Diameter (Remember, 4" wheels are actually 4.125!)
  //    (or tracking wheel diameter)
  ,3.25

  // Cartridge RPM
  //   (or tick per rotation if using tracking wheels)
  ,600

  // External Gear Ratio (MUST BE DECIMAL)
  //    (or gear ratio of tracking wheel)
  // eg. if your drive is 84:36 where the 36t is powered, your RATIO would be 2.333.
  // eg. if your drive is 36:60 where the 60t is powered, your RATIO would be 0.6.
  ,1.5


  // Uncomment if using tracking wheels
  /*
  // Left Tracking Wheel Ports (negative port will reverse it!)
  // ,{1, 2} // 3 wire encoder
  // ,8 // Rotation sensor

  // Right Tracking Wheel Ports (negative port will reverse it!)
  // ,{-3, -4} // 3 wire encoder
  // ,-9 // Rotation sensor
  */

  // Uncomment if tracking wheels are plugged into a 3 wire expander
  // 3 Wire Port Expander Smart Port
  // ,1
);