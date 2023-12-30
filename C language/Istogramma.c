#include <stdio.h>
#include <string.h>
#define MASSIMO 255
//setto il valore massimo per i vettori

//creo una funzione che mi crea un istogramma verticale
void Istogramma (char * string) {
  int lunghezza;
  lunghezza = strlen(string);
  //do la lunghezza intera della stringa alla variabile lunghezza usando strlen che sta all'interno della libreria string.h
  lunghezza = lunghezza - 1;
  //e' uno piu' grosso
  printf("\n");
  for (int i = 0; i < lunghezza; i++) {
    printf("=");
  }
  //printo l'istogramma
  printf("\n\nla lunghezza misura %d caratteri(inclusi gli spazi)\n\n", lunghezza);
}

int main () {
  char string[MASSIMO] = {0};
  printf("\ninserisci la tua stringa : \n\n");
  fgets(string, MASSIMO, stdin);
  //fgets perche' scanf non prende gli spazi
  Istogramma(string);
  //uso la funzione
  return 0;
}
