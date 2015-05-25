#include <stdio.h>

int main() {
  puts("ciao pippo!");
  return 0;
}


//compile it with gcc -o prova pippo.c
// If you compile it with gcc pippo.c, the output will be a.out
//After that run with ./prova

//If you need some mathematical function, you need to use the mathematical library and compile with:
//gcc -lm -o prova pippo.c

//The compiler, in this way, search for a library called libm.so, in the default directory, which is /usr/lib/
