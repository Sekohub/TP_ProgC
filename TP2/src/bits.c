#include <stdio.h>

int main(void)
{
    int d = 0b10101101; /* valeur de test 173 bits */
    int bit4_Gauche;
    int bit20_Gauche;

    /* Extraction du 4e bit de gauche (position 28) */
    bit4_Gauche = (d >> 28) & 1;

    /* Extraction du 20e bit de gauche (position 12) */
    bit20_Gauche = (d >> 12) & 1;

    /* Vérification */
    if (bit4_Gauche == 1 && bit20_Gauche == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
