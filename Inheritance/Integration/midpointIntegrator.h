//#ifndef _MIDPOINT_H_
//#define _MIDPOINT_H_
#include <math.h>
#include <Integrator.h>

class midpointIntegrator: public Integrator{
 public:
  midpointIntegrator();
  ~midpointIntegrator();
  double integrate(double a, double b);
  midpointIntegrator& setN(int N);

 private:
  int _N;
};

//#endif
