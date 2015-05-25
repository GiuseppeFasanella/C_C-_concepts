#include <Temperature.h>
#include <iostream>

using namespace std;

Temperature::Temperature(){//constructor
  _t=0;
}
void Temperature::SetC(double tc){
  _t=tc;
}
double Temperature::GetC(){
  return _t;
}
double Temperature::GetC(int i){ //Just to show you how to overlaod methods
  cout<<"my number is "<<i<<endl;
  return _t;
}
