#include <Integrator.h>
#include <midpointIntegrator.h>
#include <math.h>
#include <iostream>
#include <list>

using namespace std;

main(){

  list<Integrator * > l;
  int M=10;
  for(int j=1;j<=M;j++){
    midpointIntegrator *p=new midpointIntegrator;
    (*p).setN(j*100);//also p->SetN(j*100);
    (*p).setF(cos);
    l.push_back(p);
  }

  list<Integrator * >::const_iterator i=l.begin();
  list<Integrator * >::const_iterator e=l.end();

  while(i!=e){
    cout<<"Integral is "<<(**i).integrate(0.,M_PI)<<" "<<endl;
    delete *i;
    i++;
  }

}
