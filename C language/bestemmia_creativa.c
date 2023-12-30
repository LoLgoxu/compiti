#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
  char sname[20], verb[50], oname[20];
  printf("crea la tua bestemmia ramdom\n");
  printf("inserisci il nome di un santo:");
  fgets(sname, 20, stdin);
  printf("inserisci un azione virtuosa nel vero senso della parola:");
  fgets(verb, 50, stdin);
  printf("inserisci il nome di un persona che odi a morte:");
  fgets(oname, 20, stdin);
  printf("ecco il risultato\n");
  printf("porco %s", sname);
  printf("%s", verb);
  printf("%s", oname);
  return 0;
}
