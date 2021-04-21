#include <stdio.h>

void *my_memcpy(void *dest, const void *source, size_t num)
{
    size_t i;
    char *op;
    char const *po;
    if (dest != NULL && source != NULL)
    {
        op = dest;
        po = source;
        i = 0;
        while (i != num)
        {
            op[i] = po[i];
            i += 1;
        }
        return dest;
    }
    return NULL;
}
/*
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
*/
