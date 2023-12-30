#include <stdio.h>
//includo la libreria di input/output

int main () {
  //dichiaro la funzione main
  int num1, num2;
  //dichiaro due variabili intere
  printf("inserisci due numeri interi di cui vuoi farne la somma\n");
  scanf("%d %d", &num1, &num2);
  //ricevo in input il valore delle due variabili
  num1 = num1 + num2;
  //faccio la somma
  printf("la somma = %d\n", num1);
  //do la visualizzazione del risultato all'utente
  return 0;
}
