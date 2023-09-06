#pragma once
#include "main.h"
#include "pros/adi.hpp"
#include "pros/distance.hpp"

//Controller
extern Controller master;

//Motors
extern pros::Motor shlurp, lift;
extern pros::Motor motors[8];

//Pneumatics
extern pros::ADIDigitalOut leftWing, rightWing, clamp;

//Chassis
extern Drive chassis;