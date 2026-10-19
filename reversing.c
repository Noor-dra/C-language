#include <stdio.h>
int reverse(int num)
{
    int remainder, reverse = 0;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    return reverse;
}

int main()
{
    int number;
    int n;
    printf("Enter the number of digits in the number\n");
    scanf("%d", &n);
    printf("Enter a %d digit number\n", n);
    scanf("%d", &number);
    int reversed = reverse(number);
    printf("Reversed number: %d", reversed);
    return 0;
}
