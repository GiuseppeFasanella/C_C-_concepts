#include <Integrator.h>
#include <math.h>
#include <iostream>

using namespace std;

Integrator::Integrator(){cout<<"An integrator has been created"<<endl;}
Integrator::~Integrator(){cout<<"An integrator has been deleted"<<endl;}
Integrator& Integrator::setF(double (*f) (double)){
  _f=f;
  return *this;
}
double Integrator::f(double x){
  return _f(x);
}
