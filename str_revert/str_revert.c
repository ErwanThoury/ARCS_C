#include <stdio.h>

void str_revert(char str[])
{
    int len = 0;
    while (str[len])
    {
        len += 1;
    }

    char temp;
    int i = 0;
    while (i != (len / 2))
    {
        // printf("j'échange %c avec %c\n",str[i], str[len - 1 - i]);

        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
        // str[len-i] =
        i += 1;
    }
    // puts(str);
    // printf("Longueur = %d", len);
}
/*
int main(void)
{
    char foo[] = "fou";
    str_revert(foo);
    printf("%s\n", foo); // "uof"
}
*/
