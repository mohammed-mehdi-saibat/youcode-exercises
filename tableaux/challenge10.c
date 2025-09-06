#include <stdio.h>

int main() {
    char choix = 'o';
    int taille;

    while (choix == 'o' || choix == 'O') {
        printf("Combien de nombres voulez-vous saisir: ");
        scanf("%d", &taille);
        int tableau[taille];
        int element;
        int position = -1;  
        
        for (int i = 0; i < taille; i++) {
            printf("Entrez le nombre N№ %d: ", i + 1);
            scanf("%d", &tableau[i]);   
        }

        printf("Les elements du tableau: ");
        for (int i = 0; i < taille; i++) {
            printf("%d ", tableau[i]);
        }
        printf("\n");
        
        printf("Entrez un element a rechercher: ");
        scanf(" %d", &element);

        for(int i = 0; i < taille; i++) {
          if(tableau[i] == element) {
            position = i;
          } 
        }
        if(position != -1) {
          printf("L'element %d est present!\n", element);
        } else {
          printf("L'element n'est pas present!\n");
        }
        
        printf("\n");

        printf("Voulez-vous ressayer? o/n: ");  
        scanf(" %c", &choix);  
    }

    printf("Merci!\n");
    return 0;
}