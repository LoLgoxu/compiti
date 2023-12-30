#include <stdio.h>
#define MAX_LENGTH 255

void clean (char * string) {
  int string_lenght = 0, j;
  for (j = 0; string[j] != '\0'; ++j);
  //cicle for the string lenght
  string_lenght = j - 1;
  for (int i = 0; i < string_lenght; i++) {
    if (string[i] >= 65 && string[i] <= 90) {
      
    } else if (string[i] >= 97 && string[i] <= 122) {
      
    } else {
      string[i] = 0;
    }
    //if for the char statements with ASCII number table
  }
  //for cicle for do amount of time of the lenght of the string
  printf("%s\n", string);
}

int main () {
  char string[MAX_LENGTH] = {0};
  printf("inserisci la stringa da pulire : \n");
  fgets(string, 255, stdin); 
  clean(string);
  return 0;
}
