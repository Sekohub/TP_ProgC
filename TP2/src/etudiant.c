#include <stdio.h>

int main(void)
{
    int i;

    /* Informations des 5 etudiants */
    char noms[5][50] = {
        "Ozer", "Pothier", "Alan", "Bowie", "Lenon"
    };

    char prenoms[5][50] = {
        "Serkan", "Emma", "Christian", "David", "Bob"
    };

    char adresses[5][50] = {
        "9 rue Paul Fort",
        "25 avenue Paul Valery",
        "8 allée Georges Bernanos",
        "3 place de la Victoire",
        "15 rue Saint-Lazare"
    };

    float note_c[5]  = {14.5, 12.0, 16.5, 11.0, 15.0};
    float note_os[5] = {13.0, 14.5, 15.0, 10.5, 16.0};

    /* Affichage */
    printf("===== Liste des etudiant(e)s =====\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("Etudiant(e) %d\n", i + 1);
        printf("Nom     : %s\n", noms[i]);
        printf("Prenom  : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note C  : %.2f\n", note_c[i]);
        printf("Note OS : %.2f\n", note_os[i]);
        printf("-------------------------\n");
    }

    return 0;
}
