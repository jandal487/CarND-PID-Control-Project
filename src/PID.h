#ifndef PID_H
#define PID_H

class PID {
	public:
	  /*
	  * Coefficients
	  */ 
	  double Kp;
	  double Ki;
	  double Kd;
	  
	  /*
	  * Errors
	  */
	  double p_error;
	  double i_error;
	  double d_error;
	  
	  /*
	  * Constructor
	  */
	  PID();

	  /*
	  * Destructor.
	  */
	  virtual ~PID();

	  /*
	  * Initialize PID.
	  */
	  void Init(double Kp, double Ki, double Kd);

	  /*
	  * Update the PID error variables given cross track error.
	  */
	  void UpdateError(double cte);

	  /*
	  * Calculate the total PID error.
	  */
	  double TotalError();
};

#endif /* PID_H */
