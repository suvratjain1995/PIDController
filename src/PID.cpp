#include "PID.h"
#include<iostream>
using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp1, double Ki1, double Kd1) {
    Kp = Kp1;
    Ki = Ki1;
    Kd = Kd1;
    p_error= 0.0;
    i_error= 0.0;
    d_error= 0.0;
}

void PID::UpdateError(double cte) { 
    i_error += cte;
    std::cout<<"i_error "<<i_error<<std::endl;
    // i_error = i_error;
    d_error = (cte-p_error);
    std::cout<<"d_error "<<d_error<<std::endl;
    p_error = (cte);
    std::cout<<"p_error "<<p_error<<std::endl;
}

double PID::TotalError() {
    return (-p_error*Kp)-(i_error*Ki)-(d_error*Kd);
}

