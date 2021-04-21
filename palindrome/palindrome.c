#include <stdio.h>

int palindrome(const char *s)
{
    if (s == NULL)
        return 0;
    // size_t len = sizeof(s);
    int len = 0;
    while (s[len])
    {
        len += 1;
    }
    int y = len - 1;
    char first;
    char second;
    // printf("taille = %d \n", len);
    for (int i = 0; i < len; i += 1)
    {
        while (s[i] == ' ' || s[i] == '-' || s[i] == 047 || s[i] == '.'
               || s[i] == ',')
        {
            i += 1;
        }
        // putchar(s[i]);
        first = s[i];
        // putchar('\n');
        while (s[y] == ' ' || s[y] == '-' || s[y] == 047 || s[y] == '.'
               || s[y] == ',')
        {
            y -= 1;
        }
        second = s[y];
        // printf("On a %c ?= %c \n", first, second);
        if (first != second)
        {
            return 0;
        }
        // putchar(s[y]);
        // putchar('\n');
        // printf("On a %c ?= %c \n", first, second);
        // putchar(044);
        y -= 1;
    }
    return 1;
}
/*
int main(void)
{
    int i = palindrome("Tu l'aS troP ete, Port-SaluT.");
}
*/
