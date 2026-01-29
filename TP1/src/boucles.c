#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int compteur = 5;  /* doit être strictement inférieur à 10 */
    int i, j;

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
