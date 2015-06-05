#include <vector>
#include <iostream>
//! example of comment for doxygen
using namespace std;

main(){

  //Main advatage: no need to specify the length of a vector!
  vector<double> v;
  for(int i=0;i<4;i++){
    v.push_back(9); 
    //If you don't declare the length of the vector you need to use push_back to fill the empty vector.
    //After after filled, you can access v[0]. If you do it and it's still empty -> "seg fault"
  }

  cout<<v.size()<<endl;

  //On the other hand, if you want to specify the length, do it.
  vector<double> v2(4,0.); //Here, you declared the length of the vector, so you can directly use v2[0]=5;

  //Navigate a vector. Either with indexes or using iterators

  std::vector<double>::const_iterator i;
  std::vector<double>::const_iterator e;

  i=v.begin();
  e=v.end();

  while(i!=e){
    cout<<*i<<endl;
    i++;
  }

}

//Compile with 
//c++ -I. vector.cpp -o vector.exe

