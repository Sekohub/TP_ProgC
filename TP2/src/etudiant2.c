#include <stdio.h>
#include <string.h>   /* pour strcpy */

#define NB_ETUDIANTS 5

/* Définition de la structure Etudiant */
struct Etudiant
{
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main(void)
{
    int i;

    /* Tableau de 5 etudiants */
    struct Etudiant etudiants[NB_ETUDIANTS];

    /* Initialisation des donnees */

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Sophie");
    strcpy(etudiants[2].adresse, "5 Rue Victor Hugo, Paris");
    etudiants[2].note1 = 15.5;
    etudiants[2].note2 = 13.8;

    strcpy(etudiants[3].nom, "Durand");
    strcpy(etudiants[3].prenom, "Lucas");
    strcpy(etudiants[3].adresse, "18 Avenue Foch, Marseille");
    etudiants[3].note1 = 11.0;
    etudiants[3].note2 = 12.5;

    strcpy(etudiants[4].nom, "Moreau");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "7 Place Bellecour, Lyon");
    etudiants[4].note1 = 17.2;
    etudiants[4].note2 = 15.9;

    /* Affichage des informations */

    printf("===== Liste des etudiant(e)s =====\n\n");

    for (i = 0; i < NB_ETUDIANTS; i++)
    {
        printf("Etudiant(e) %d :\n", i + 1);
        printf("Nom    : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse: %s\n", etudiants[i].adresse);
        printf("Note 1 : %.2f\n", etudiants[i].note1);
        printf("Note 2 : %.2f\n", etudiants[i].note2);
        printf("\n");
    }

    return 0;
}
