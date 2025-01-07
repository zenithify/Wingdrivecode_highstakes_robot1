#pragma once

#include "api.h"

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');
inline pros::Motor intake(7);
inline pros::Motor LB_1 (1);
inline  pros::Motor LB_2 (2);
inline pros::Motor_Group motor_group ({LB_1, LB_2});
inline pros::Motor lift(-12);
inline pros::ADIDigitalOut MOGO ('A');
inline pros::ADIDigitalOut Doinker ('B');
inline pros::Rotation LB_rotation_sensor (5);
