#include <stdio.h>

int main () {
  int anni;
  //dichiaro variabili intera
  printf("quanti anni hai ? : ");
  scanf("%d", &anni);
  //ricevo il dato
  anni = anni * 365;
  //calcolo i giorni
  printf("hai vissuto almeno %d giorni\n", anni);
  //faccio vedere il risultato all'utente
  return 0;
}
