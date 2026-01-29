#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int compteur = 5;  
    int i, j;

    printf("=== Version avec boucles for ===\n");

    for (i = 1; i <= compteur; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == compteur)
            {
                /* dernière ligne : uniquement des * */
                printf("* ");
            }
            else if (j == 1 || j == i)
            {
                /* bord gauche et bord droit */
                printf("* ");
            }
            else
            {
                /* intérieur */
                printf("# ");
            }
        }
        printf("\n");
    }

    printf("\n=== Version avec boucle while ===\n");

    i = 1;
    while (i <= compteur)
    {
        j = 1;
        while (j <= i)
        {
            if (i == compteur)
            {
                printf("* ");
            }
            else if (j == 1 || j == i)
            {
                printf("* ");
            }
            else
            {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
