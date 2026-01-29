#include <stdio.h>

int main(void)
{
    int n = 5;   /* hauteur de la pyramide */
    int i, j;

    /* Génération de la pyramide */
    for (i = 1; i <= n; i++)
    {
        /* Affichage des espaces pour centrer */
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        /* Affichage des nombres croissants */
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        /* Affichage des nombres décroissants */
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        /* Passage à la ligne suivante */
        printf("\n");
    }

    /* Fin du programme */
    printf("\nGeneration de la pyramide terminee.\n");

    return 0;
}

