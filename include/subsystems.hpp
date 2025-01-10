#pragma once

#include "api.h"

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');
inline pros::Motor intake(20);
inline pros::MotorGroup LB({1, -9});
inline pros::ADIDigitalOut MOGO ('A');
inline pros::ADIDigitalOut Doinker ('B');
inline pros:: Rotation LBrotation (7);
inline pros::Optical Optical_sensor (8);