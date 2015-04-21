
#include<iostream>

int div(int a, int b) {
  return a/b;
};


int main() {
  int a=2;
  int b=0;

  std::cout<<"a="<<a<<", b="<<b<<'\n';
  std::cout<<"a/b="<<div(a,b)<<'\n';

  return 0;
}
