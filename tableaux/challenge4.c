#include <stdio.h>


int main() {
  char choix = 'o';
  int taille;

  while (choix == 'o' || choix == 'O') {
    printf("Combien de nombres voulez-vous saisir: ");
    scanf("%d", &taille);
    int tableau[taille];
    
    
    for (int i = 0; i < taille; i++) {
      printf("Entrez le nombre N№ %d: ", i + 1);
      scanf("%d", &tableau[i]);   
    }
    printf("Les elements du tableau: ");
    for(int i = 0; i < taille; i++) {
      printf("%d ", tableau[i]);
    }
    printf("\n");
    int max = tableau[0];
    for(int i = 0; i < taille; i++) {
      if(tableau[i] > max) {
        max = tableau[i];
      }
    }
    printf("Le maximum est: %d\n", max);


    printf("Voulez-vous ressayer? o/n: ");  
    scanf(" %c", &choix);  
  }
  printf("Merci!\n");

  return 0;
}
