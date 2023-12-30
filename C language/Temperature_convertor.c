#include <stdio.h>

float Celsius_to_Fahrenheit (float c) {
  c = (c * 1.8) + 32;
  printf("sono %f Fahrenheit\n", c);
}
//funzione in float che calcola e da la visualizzazione della conversione C-F

int main () {
  float Celsius;
  printf("inserisci i gradi celsius : ");
  scanf("%f", &Celsius);
  Celsius_to_Fahrenheit (Celsius);
  //utilizzo della funzione C-F
  return 0;
}
