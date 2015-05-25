#ifndef _INTEGRATOR_H_
#define _INTEGRATOR_H_

#include <iostream>
#include <math.h>

using namespace std;

class Integrator{

 public:
  Integrator();
  virtual ~Integrator();
  Integrator& setF(double (*f)(double));
  virtual double integrate(double a,double b)=0; //now Integrator is an "abstract class". It forces to use the specific integrate methods
  double f(double x);

 private:
  double (*_f)(double);

};

#endif
