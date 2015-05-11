#include<iostream>

//compile me like this:: (I always forget)
//g++ -o template.exe template.cpp

// CALC is a TEMPLATE CLASS
template <class Generic_Type> class calc //class calc can work with a Generic_Type, specified only at run time
{
  public:
    Generic_Type multiply(Generic_Type x, Generic_Type y);
};
template <class Generic_Type> Generic_Type calc<Generic_Type>::multiply(Generic_Type x,Generic_Type y)
{
  return x*y;
}


//MAIN
int main() {
  int a=4;
  int b=5;
  calc <int> my_calculator; //you want to use calc with int type, so after the name of the class, you type <int>
  std::cout<<my_calculator.multiply(a,b)<<std::endl;

  //See, how to template class works! Now calc works with double
  double c=4.001;
  double d=5.2;
  calc <double> my_calculator2;
  std::cout<<my_calculator2.multiply(c,d)<<std::endl;
}



/*
// THIS IS THE IDEA OF CALC CLASS, in its conceptual structure
class calc
{
  public:
    int multiply(int x, int y);
 };

int calc::multiply(int x, int y)
{
  return x*y;
}
//
*/
