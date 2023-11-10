#pragma once
#include "main.h"
#include "pros/adi.hpp"
#include "pros/distance.hpp"

//Controller
extern Controller controller;

//Motors
extern pros::Motor cata, lift;
extern pros::Motor motors[8];

//Pneumatics
extern pros::ADIDigitalOut wings;
extern pros::ADIDigitalIn bumper;

//Chassis
extern Drive chassis;