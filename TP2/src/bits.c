#include <stdio.h>

int main(void)
{
    int d = 173;   

    int bit4_gauche  = (d >> 28) & 1;
    int bit20_gauche = (d >> 12) & 1;

    if (bit4_gauche == 1 && bit20_gauche == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
