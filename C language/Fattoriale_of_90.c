#include <stdio.h>

//funzione per il calcolo del fattoriale
int Fattoriale(int limit){
  long double num = 1;
  for (int i = 1; i <= limit; i++) {
    num = num * i;
  }
  printf("il fattoriale di 90 = %.1Lf\n", num);
}

int main () {
  int n = 90;
  Fattoriale(n);
  return 0;
}
