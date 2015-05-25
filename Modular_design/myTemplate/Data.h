#ifndef _Data_h
#define _Data_h

#include <string>
#include <iostream>
using namespace std;

Template<class Tx, class Ty>

  //La classe Data e' specificata a meno di 2 tipi Tx e Ty
class Data{
 public:
  //methods
  Data();
  void push_back(Tx x,Ty y);
  Ty average();

 private:
  vector<Tx> _x;
  vector<Ty> _y;

};//Non mi e' chiaro se il ; ci va

//MA QUI??? DOVE LO SCRIVO??
Template <class Tx, class Ty> void
  Data::push_back(Tx x,Ty y){
  _x.push_back(x);
  _y.push_back(y);
}

Template <class Tx, class Ty> void
  Data::average(){
  Ty S=0;
  for(int i=0,i<_y.size();i++){
    S+=_y[i];
  }
  S/=_y.size();
  return S;
}

#endif
