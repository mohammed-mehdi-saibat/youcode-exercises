#include <stdio.h>

int  main() {
  int n = 0;
  char choix = 'o';
  while(choix == 'o' || choix == 'O') {
    printf("Entrez un nombre pour calculer son factoriel: ");
    int result = 1;
    scanf("%d", &n);

    if(n < 0) {
    printf("Factoriel non défini pour un nombre négatif!\n");
    continue;
    }
    if(n == 0) {
      printf("%d! = 1\n", n);
    } else {
      for(int i = 2; i <= n; i++) {
        result *= i;
      }
      printf("%d! = %d\n", n, result);
    }


    printf("\nVoulez-vous ressayer? o/n: ");
    scanf(" %c", &choix);
  }
  printf("Merci!\n");
}