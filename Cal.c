#include <stdio.h>
int main ()
{
    float x, y;
    printf("Enter two numbers\n");
    scanf("%f %f", &x, &y);
    char operators;
    printf("Enter the operation to be performed(+,-,*,/):\n");
    scanf(" %c", &operators);
    switch(operators)
    {
    case '+':
        printf("%f+%f=%f\n", x, y, x + y);
        break;
    case '-':
        printf("%f-%f=%f\n", x, y, x - y);
        break;
    case '*':
        printf("%f*%f=%f\n", x, y, x * y);
        break;
    case '/':
        if (y != 0)
            printf("%f/%f=%f", x, y, x / y);
        else
            printf("Division by 0 is not allowed\n");
        break;
    default:
        printf("Enter a valid operator");
    }

    return 0;
    
}