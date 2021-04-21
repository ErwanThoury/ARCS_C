#include <stdio.h>

size_t my_strlen(const char *s)
{
    size_t retour = 0;
    while (s[retour] != '\0')
    {
        retour += 1;
    }
    return retour;
}
