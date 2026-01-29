#include <stdio.h>

int main(void)
{
    int n = 7;
    int u0 = 0, u1 = 1, un;
    int i;

    printf("%d, %d", u0, u1);

    for (i = 2; i <= n; i++)
    {
        un = u0 + u1;
        printf(", %d", un);
        u0 = u1;
        u1 = un;
    }

    printf("\n");
    return 0;
}
