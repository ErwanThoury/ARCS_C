#include <stdio.h>

int check_alphabet(const char *str, const char *alphabet)
{
    if (alphabet == NULL)
    {
        return 1;
    }
    char *por = "";
    if (alphabet == por)
    {
        return 0;
    }
    int lenS = 0;
    while (str[lenS])
    {
        lenS += 1;
    }

    int lenA = 0;
    while (alphabet[lenA])
    {
        lenA += 1;
    }
    int boo;
    for (int i = 0; i < lenA; i += 1)
    {
        boo = 0;
        for (int y = 0; y < lenS; y += 1)
        {
            if (str[y] == alphabet[i])
                boo = 1;
            // printf("%c == %c\n",str[y], alphabet[i] );
        }
        if (boo == 0)
        {
            return 0;
        }
    }
    return 1;
}
