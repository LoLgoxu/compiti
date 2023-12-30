#include <stdio.h>

int main () {
  double Base, Altezza;
  //dichiaro le variabili 
  printf("inserisci i valori prima della base, poi dell'altezza :\n");
  scanf("%lf %lf", &Base, &Altezza);
  //ricevo i dati
  Base = (Base * Altezza) / 2;
  //calcolo
  printf("l'area del rettangolo = %lf\n", Base);
  //visualizzazione
  return 0;
}
