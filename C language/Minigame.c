#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
  int num;
  srand( time (NULL) ); 
  num = 0+(rand() %100);  
  int answer, attempt = 0;
  
  do {
    printf("inserisci il numero : ");
    scanf("%d", &answer);
     
    if (answer == num) {
      printf("Hai vinto usando %d tentativi!\n", attempt+1);
    } else {
      if (answer < num) {
        printf("il numero e' maggiore %d\n", answer);
      } else {
        printf("il numero e' minore %d\n", answer);
      }
    }
    
    attempt++;
  } while(answer!=num);
  
  return 0;
}
