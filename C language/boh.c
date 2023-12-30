#include <stdio.h>
#include <stdlib.h>

double qdrt(double n){
  double res = n * n;
  return res;
}

int main ()
{
  double x;
  printf("inserisci il valore : ");
  scanf("%lf", &x);
  printf("la risposta : %f \n", qdrt(x));
  return 0;
}
