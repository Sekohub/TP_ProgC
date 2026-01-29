#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* i. char */
    signed char c1 = -65;
    unsigned char c2 = 200;

    /* ii. short */
    signed short s1 = -32000;
    unsigned short s2 = 65000;

    /* iii. int */
    signed int i1 = -100000;
    unsigned int i2 = 300000;

    /* iv. long int */
    signed long int l1 = -1000000;
    unsigned long int l2 = 4000000;

    /* v. long long int */
    signed long long int ll1 = -9000000000;
    unsigned long long int ll2 = 18000000000;

    /* vi. float */
    float f = 3.14;

    /* vii. double */
    double d = 2.718281828;

    /* viii. long double */
    long double ld = 1.6180339887;

    /* Affichage des valeurs */
    printf("signed char : %d\n", c1);
    printf("unsigned char : %u\n\n", c2);

    printf("signed short : %d\n", s1);
    printf("unsigned short : %u\n\n", s2);

    printf("signed int : %d\n", i1);
    printf("unsigned int : %u\n\n", i2);

    printf("signed long int : %ld\n", l1);
    printf("unsigned long int : %lu\n\n", l2);

    printf("signed long long int : %lld\n", ll1);
    printf("unsigned long long int : %llu\n\n", ll2);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
