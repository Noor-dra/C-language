#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isvowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
int countvowel(char str[])
{
    int count = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isvowel(str[i]))
            count++;
    }
    return count;
}

int main()
{

    char str[50];
    printf("Enter the string\n");
    scanf(" %s", &str);
    int result = countvowel(str);
    int c = strlen(str);
    printf("The number of vowels and consonants in the string %s is %d and %d respectively\n", str, result, c - result);
    return 0;
}