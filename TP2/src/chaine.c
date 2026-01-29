#include <stdio.h>

int main(void)
{
    char chaine1[50];
    char chaine2[50];
    char copie[50];
    char concat[100];

    int i, j;
    int longueur = 0;

    /* Saisie des chaînes */
    printf("Entrez la premiere chaine : ");
    scanf("%49[^\n]", chaine1);   /* lit une ligne avec espaces */

    getchar(); /* consomme le '\n' restant */

    printf("Entrez la deuxieme chaine : ");
    scanf("%49[^\n]", chaine2);

    /* Calcul de la longueur de chaine1 */
    i = 0;
    while (chaine1[i] != '\0')
    {
        longueur++;
        i++;
    }

    printf("\nLongueur de la premiere chaine : %d\n", longueur);

    /* Copie de chaine1 dans copie */
    i = 0;
    while (chaine1[i] != '\0')
    {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';

    printf("Copie de la premiere chaine : %s\n", copie);

    /* Concaténation de chaine1 et chaine2 */
    i = 0;
    j = 0;

    while (chaine1[i] != '\0')
    {
        concat[i] = chaine1[i];
        i++;
    }

    while (chaine2[j] != '\0')
    {
        concat[i] = chaine2[j];
        i++;
        j++;
    }

    concat[i] = '\0';

    printf("Chaine concatenee : %s\n", concat);

    return 0;
}
