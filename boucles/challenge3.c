#include <stdio.h>

int  main() {
  int n = 0;
  char choix = 'o';
  while(choix == 'o' || choix == 'O') {
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = 0;

    for(int i = 0; i <= n; i++) {
      result += i;
    }

    printf("La somme des nombres entre 0 et %d est: %d\n",n, result);

    printf("\nVoulez-vous ressayer? o/n: ");
    scanf(" %c", &choix);
  }
  printf("Merci!\n");
}