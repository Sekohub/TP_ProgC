#include <stdio.h>

int main(void)
{
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int nb_tests = 5;
    int i, j;
    int n;
    int bits[32];

    for (i = 0; i < nb_tests; i++)
    {
        n = nombres[i];

        printf("Decimal : %d\nBinaire : ", n);

        /* Cas particulier : 0 */
        if (n == 0)
        {
            printf("0\n\n");
            continue;
        }

        /* Conversion en binaire par divisions successives */
        j = 0;
        while (n > 0)
        {
            bits[j] = n % 2;
            n = n / 2;
            j++;
        }

        /* Affichage en ordre inverse */
        for (j = j - 1; j >= 0; j--)
        {
            printf("%d", bits[j]);
        }

        printf("\n\n");
    }

    return 0;
}
