#include <stdio.h>

int  main() {
  int n = 0;
  char choix = 'o';
  while(choix == 'o' || choix == 'O') {
    printf("Entrez un nombre: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
      printf(" %d |", i * 2);
    }


    printf("\nVoulez-vois ressayer? o/n: ");
    scanf(" %c", &choix);
  }
  printf("Merci!\n");
}