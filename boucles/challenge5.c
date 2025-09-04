#include <stdio.h>

int  main() {
  int base;
  int exposant;
  char choix = 'o';
  while(choix == 'o' || choix == 'O') {
    int result = 1;
    printf("Enter la base: ");
    scanf("%d", &base);
    // int original = base; // Pour garder la valeur initiale du base
    printf("Entrez l'exposant: ");
    scanf("%d", &exposant);

    for(int i = 1; i <= exposant; i++) {
      result *= base;
    }

    printf("%d^%d = %d\n",base, exposant, result );
    
    
    printf("\nVoulez-vous ressayer? o/n: ");
    scanf(" %c", &choix);
  }
  printf("Merci!\n");
}