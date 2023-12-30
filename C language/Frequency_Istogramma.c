#include <stdio.h>
#include <string.h>
#define MAX 255
//definisco il valore massimo per tutti i valori

//creo una funzione che mi crea l'output della frequenza in n istogramma
void Frequency_Istogramma (char * string) {
  int String_length, istorgam_length, letter_quantity[123] = {0};
  //lunghezza della stringa 
  //lunghezza dell'istogramma 
  
  int ASCII_num_letter = 97, ASCII_num_letter2 = 97;
  //due variabili uguali per usanze uguali ma cicli diversi
  
  String_length = strlen(string);
  //capisco quale sia la lunghezza della stringa ricevuta con fgets nel main
  
  String_length = String_length - 1;
  //diminuisco di uno perche' e' uno piu' grande
  
  printf("\n");
  for (int i = 0; i < String_length; i++) {
    printf("=");
  }
  //metto in output la lunghezza della stringa in istogramma
  
  printf("\n\nla lunghezza misura %d caratteri(inclusi gli spazi)\n\n", String_length);
  //metto in output la lunghezza della stringa a lettere
  
  
  printf("attenda un momento ...\n\n");
  for (int i = 0; i < String_length; i++) {
    while (string[i] != ASCII_num_letter) {
      ASCII_num_letter++;
      //accumulatore che ha il compito di arrivare al valore ASCII del carattere
    }  
    //ciclo che fa arrivare al valore ASCII all'accumulatore ad ogni carattere
    letter_quantity[ASCII_num_letter]++;
  }
  //ciclo che gira a seconda della lunghezza della stringa e che conta quante volte ogni lettera vi e'
  
  for (int i = 97; i < 123; i++) {
    printf("%c : ", ASCII_num_letter2);
    //a b c d e .....
    istorgam_length = letter_quantity[i];
    //visto che in for non si possono usare vettori do il valore a un'altra variabile
    for (int i = 0; i < istorgam_length; i++) {
      printf("=");
    }
    //ciclo che fa l'istogramma
    printf("\n");
    ASCII_num_letter2++;
    //valore che parte da 97 e si accumula per far visualizzare le lettere
  }
  //ciclo che mette in output l'istogramma
}

int main () {
  char string[MAX] = {0};
  printf("\ninserisci la tua stringa : \n\n");
  fgets(string, MAX, stdin);
  //uso fgets perche' scanf non prende spazi si puo utilizzare anche gets
  Frequency_Istogramma(string);
  //uso della funzione creata con tipo void
  return 0;
}
