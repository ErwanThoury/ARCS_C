#include <stdio.h>

void my_strupcase(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (97 <= str[i] && str[i] <= 122)
            str[i] = str[i] - 32;
        i += 1;
    }
}
