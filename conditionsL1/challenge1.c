#include <stdio.h>

int main() {
  int a;
  char choix = 'o';
  
  while(choix == 'o' || choix == 'O') {
    printf("Entrez un nombre: ");
    scanf("%d", &a);
    if(a % 2 == 0) {
      printf("%d est paire!\n", a);
    } else if (a % 2 != 0) {
      printf("%d est impaire!\n", a);
    }
    printf("Voulez vous verifier un autre nombre? o/n: ");
    scanf(" %c", &choix);
  }

  printf("Merci!\n");
}