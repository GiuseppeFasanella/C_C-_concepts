#include <map>
#include <string>
#include <iostream>
using namespace std;

main(){
  map<string,double> myMap;

  myMap["hot"]=100;
  myMap["room"]=20;

  cout<<"Printing the map"<<endl;

  map<string,double>::const_iterator i;
  map<string,double>::const_iterator e;
  i=myMap.begin();
  e=myMap.end();

  while(i!=e){
    cout<<i->first;
    //This is the key of the map
    cout<<"  "<<i->second<<endl;
    //This is the value associated to the key
    i++;
  }

  if(myMap.find("cold")!=myMap.end()){
    cout<<"The key\"cold\" is present"<<endl;
  }else{
    cout<<"The key\"cold\" is NOT present"<<endl;
  }


}
