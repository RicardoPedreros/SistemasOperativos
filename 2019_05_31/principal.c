#include <stdio.h>
#include "entero.h"

int main(int argc, char** argv) {
  entero a,b;

  a = 5;
  b = 6;
  printf("la suma de %d + %d es %d\n",a,b,suma(a,b));
  printf("la resta de %d - %d es %d\n",a,b,resta(a,b));
  printf("la multiplicacion de %d / %d es %d\n",a,b,mult(a,b));
  printf("la division entera de %d / %d es %d\n",a,b,div(a,b));
  printf("la division de %d / %d es %f\n",a,b,(float)div(a,b));
}

