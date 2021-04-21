#include <stdio.h>

size_t element_count(int *begin, int *end)
{
    size_t retour = 0;
    while (begin != end)
    {
        retour += 1;
        begin += 1;
    }
    return retour;
}
