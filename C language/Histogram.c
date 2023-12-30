#include <stdio.h>
#define MAX_LENGTH 255
//setto il valore massimo per i vettori

//creo una funzione che mi crea un istogramma verticale
void Histogram (char * string) {
  int length, j, i;
  //inizializzo lunghezza e i due accumulatori
  for (j = 0; string[j] != '\0' ; ++j);
  //uso un ciclo for visto che no posso usare le librerie, lui mi verifica che cella dell'array non sia '\0' visto che e' come il "punto" negli array di char
  length = j - 1;
  //visto che conta anche '\0' diminuisco di uno
  printf("\t\t\t\t\t\t\t\t\t\t\t");
  //serve per la tabulazione dell'output si sembra autistica come cosa ma era la piu' veloce da capire e trovare
  printf("[");
  //aggiungo una parentesi per bellezza
  for (i = 0; i < length; i++) {
    printf("=");
  }
  //ciclo che printa l'istogramma
  printf("]   %d", i);
  printf("\n");
}

int main () {
  char string[MAX_LENGTH] = {0};
  //dichiaro array di char per formare una string e gli do {0} per pulire le celle 
  char BASTA[] = "BASTA!";
  //dichiaro la stringa che mi permette di far uscire l'utente 
  int BASTALength = 6, i = 0;
  //dichiaro la lunghezza di BASTA e l'accumulatore per verificare la lunghezza del BASTA
  printf("\ninserisci le tue stringhe (devi inserisce BASTA! per quittare): \n\n");
  //ciclo che serve per continua finche' non si inserisce BASTA
  while(1) {
    fgets(string, MAX_LENGTH, stdin);
    //fgets perche' scanf non prende gli spazi
    Histogram(string);
    //uso la funzione
    
    for (i = 0; i < BASTALength; i++) {
        if (string[i] != BASTA[i]) {
            break;
            //breako il ciclo anche perche non e' BASTA la stringa inserita
        }
    }
    //ciclo che cicla 5 volte solo se la stringa e' BASTA visto che all'interno ha un if che verifica se le celle della stringa in input sono equivalenti a BASTA se non lo sono esce dal ciclo
    
    if (i == BASTALength) {
        break;
    }
    //if finale che checka se si ha ciclato quante volte la lunghezza di BASTA se si esci dal while 
   }   
  return 0;
}
