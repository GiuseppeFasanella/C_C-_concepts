#include <midpointIntegrator.h>
#include <Integrator.h>
#include <iostream>

using namespace std;

#include <math.h>
#include <Integrator.h>

midpointIntegrator::midpointIntegrator(){
  cout<<"A midpointIntegrator has been created"<<endl;
}

midpointIntegrator::~midpointIntegrator(){
  cout<<"A midpointIntegrator has been deleted"<<endl;
}

double midpointIntegrator::integrate(double a, double b){

  double bins=(b-a)/_N;
  double sum=0;

  for(int i=0;i<_N;i++){
    double c= a+i*bins;
    double d= a+(i+1)*bins;
    sum+= f((c+d)/2)*bins;
  }
  return sum;
}

midpointIntegrator& midpointIntegrator::setN(int N){
  _N=N;
  return *this;
}
