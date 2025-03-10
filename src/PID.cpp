#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	this->Kp = Kp;
	this->Kd = Kd;
	this->Ki = Ki;
	
	this->p_error = 0.0;
	this->d_error = 0.0;
	this->i_error = 0.0;
}

void PID::UpdateError(double cte) {
	d_error = cte - p_error;
	p_error = cte;
	i_error += cte;

}

double PID::TotalError() {
	return -Kp*p_error - Kd*d_error - i_error*Ki;
}

