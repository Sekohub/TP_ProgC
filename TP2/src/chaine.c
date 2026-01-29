#include <stdio.h>

int main(void)
{
    char chaine1[] = "Hello";
    char chaine2[] = " World!";
    char copie[50];
    char concat[100];

    int i;
    int longueur = 0;

    /* 1️⃣ Calcul de la longueur de chaine1 */
    i = 0;
    while (chaine1[i] != '\0')
    {
        longueur++;
        i++;
    }

    printf("Longueur de la chaine \"%s\" : %d\n", chaine1, longueur);

    /* 2️⃣ Copie de chaine1 dans copie */
    i = 0;
    while (chaine1[i] != '\0')
    {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0';   /* fin de chaine */

    printf("Copie de la chaine : %s\n", copie);

    /* 3️⃣ Concaténation de chaine1 et chaine2 */
    i = 0;
    int j = 0;

    /* Copier chaine1 dans concat */
    while (chaine1[i] != '\0')
    {
        concat[i] = chaine1[i];
        i++;
    }

    /* Ajouter chaine2 à la suite */
    while (chaine2[j] != '\0')
    {
        concat[i] = chaine2[j];
        i++;
        j++;
    }

    concat[i] = '\0';   /* fin de chaine */

    printf("Chaine concatenee : %s\n", concat);

    return 0;
}
