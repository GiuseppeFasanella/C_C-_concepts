//Main program. All the complexity goes in the classes, so the "main" part is very easy
# include <Temperature.h>
# include <iostream>

main(){

  Temperature t;
  t.SetC(20);
  std::cout<<t.GetC()<<std::endl;
  std::cout<<t.GetC(2)<<std::endl;
  Temperature t2;
  t2.SetC(21);
  std::cout<<"t1 and t2 are equal? "<<(t2==t)<<std::endl;

}

/*Compilation procedure:
*****First step you compile your classes
c++ -c -I. Temperature.cc

*****Then you compile the main and link the classes
c++ -I. main.cpp Temperature.o -o main.exe

*****Enjoy
./main.exe


