#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contact {
    char nom[20];
    char numero[20];
    char email[20];
};

int main() {
    struct contact P[100];
    char rechercher[20], modifier[20], supprimer[20];
    int i = 0, op, n, j;

    do {
        printf("----------------------------------------------------\n");
        printf("1- Ajouter un contact\n");
        printf("2- Modifier un contact\n");
        printf("3- Supprimer un numero\n");
        printf("4- Afficher tous les contacts\n");
        printf("5- Rechercher un contact\n");
        printf("----------------------------------------------------\n");
        printf("**************************************\n");
        printf("Vous choisissez: ");
        scanf("%d", &op);
        printf("**************************************\n");
        getchar();

        switch (op) {
            case 1:
                printf("Entrez le nom: ");
                fgets(P[i].nom, 20, stdin); strtok(P[i].nom, "\n");
                printf("Entrez le numero du telephone: ");
                fgets(P[i].numero, 20, stdin); strtok(P[i].numero, "\n");
                printf("Entrer l'email: ");
                fgets(P[i].email, 20, stdin); strtok(P[i].email, "\n");
                i++;
                break;

            case 2:
                printf("Saisissez un nom que vous voulez modifier: ");
                fgets(modifier, 20, stdin); strtok(modifier, "\n");
                for (j = 0; j < i; j++) {
                    if (strcmp(P[j].nom, modifier) == 0) {
                        printf("Entrez le nouveau numero: ");
                        fgets(P[j].numero, 20, stdin); strtok(P[j].numero, "\n");
                        printf("Entrez la nouvelle adresse email: ");
                        fgets(P[j].email, 20, stdin); strtok(P[j].email, "\n");
                    }
                }
                break;

            case 3:
                printf("Saisissez un nom que vous voulez supprimer: ");
                fgets(supprimer, 20, stdin); strtok(supprimer, "\n");
                for (j = 0; j < i; j++) {
                    if (strcmp(P[j].nom, supprimer) == 0) {
                        for (int k = j; k < i - 1; k++) {
                            P[k] = P[k + 1];
                        }
                        i--;
                        break;
                    }
                }
                break;

            case 4:
                for (j = 0; j < i; j++) {
                    printf("Nom : %s \nNumero : %s\nEmail : %s\n", P[j].nom, P[j].numero, P[j].email);
                    printf("----------------------------------------------\n");
                }
                break;

            case 5:
                printf("Saisissez un nom que vous voulez rechercher: ");
                fgets(rechercher, 20, stdin); strtok(rechercher, "\n");
                for (j = 0; j < i; j++) {
                    if (strcmp(P[j].nom, rechercher) == 0) {
                        printf("Nom : %s \nNumero : %s\nEmail : %s\n", P[j].nom, P[j].numero, P[j].email);
                        break;
                    }
                }
                if (j == i) {
                    printf("Le contact que vous cherchez %s n’existe pas!\n", rechercher);
                }
                break;
        }

        printf("****Voulez-vous continuer?****\nOui = 1 ; Non = 0 :\nVous choisissez: ");
        scanf("%d", &n);
        getchar();
    } while (n != 0);

    printf("Merci!\n");
    return 0;
}
