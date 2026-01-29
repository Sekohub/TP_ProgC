#include <stdio.h>

int main(void)
{
    int num1, num2;
    char op;

    printf("Entrez le premier nombre entier : ");
    fflush(stdout);
    scanf("%d", &num1);

    printf("Entrez le second nombre entier : ");
    fflush(stdout);
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    fflush(stdout);
    scanf(" %c", &op);   /* espace AVANT %c = très important */

    printf("\nOperateur lu : %c\n", op);  /* DEBUG visuel */

    switch (op)
    {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Erreur : division par zero\n");
            break;

        case '%':
            if (num2 != 0)
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Erreur : modulo par zero\n");
            break;

        case '&':
            printf("%d & %d = %d\n", num1, num2, num1 & num2);
            break;

        case '|':
            printf("%d | %d = %d\n", num1, num2, num1 | num2);
            break;

        case '~':
            printf("~%d = %d\n", num1, ~num1);
            break;

        default:
            printf("Operateur non reconnu : '%c'\n", op);
    }

    return 0;
}
