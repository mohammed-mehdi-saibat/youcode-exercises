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
    printf("Les elements du tableau original: ");
    for(int i = 0; i < taille; i++) {
      printf("%d ", tableau[i]);
    }
    printf("\n");
    
    int copieTableau[taille];
    
    for(int i = 0; i < taille; i++) {
      copieTableau[i] = tableau[i];
    }
    printf("Les elemets de copie de tableau: ");
    for(int i = 0; i < taille; i++) {
      printf("%d ", copieTableau[i]);
    }
    printf("\n");


    printf("Voulez-vous ressayer? o/n: ");  
    scanf(" %c", &choix);  
  }
  printf("Merci!\n");

  return 0;
}
