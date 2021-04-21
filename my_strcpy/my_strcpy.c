#include <stdio.h>

char *my_strcpy(char *dest, const char *source)
{
    int i = 0;
    char *po = "";
    if (source == po)
    {
        dest[i] = '\0';
        return dest;
    }
    while (source[i] != '\0')
    {
        dest[i] = source[i];
        i += 1;
    }
    dest[i] = '\0';
    return dest;
}
