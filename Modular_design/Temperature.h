#ifndef _TEMPERATURE_H_
#define _TEMPERATURE_H_ 
//In this way, you're protecting against redefinition of temperature class

#include <iostream>
using namespace std;

class Temperature{
 public:
  //methods
  Temperature();
  void SetC(double tc);
  double GetC();
  double GetC(int i);//overloading of GetC

  //Operators
  //You can even define [] operator or == or <
  bool operator < (const Temperature &r){
    return (_t<r._t);
  }
  bool operator == (const Temperature &r){
    return(_t==r._t);
  }

  ostream& operator << (ostream &o,const Temperature &r){
    o<<" Tempature is "<<r._t<<endl;
    return o;
    //usage cout<<t
  }
  //double operator[](inti) const;
  //double& operator[](int i);
  
 private://attributes
  double _t;
    };


#endif

