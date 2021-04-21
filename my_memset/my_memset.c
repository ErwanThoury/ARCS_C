#include <stdio.h>

void *my_memset(void *s, int c, size_t n)
{
    char *cc = s;
    size_t i = 0;
    /*
    int ten = 1;
    int neg = 0;
    if (c < 0)
    {
        c *= -1;
        neg = 1;
    }
    if (c == 0)
    {
        se = 0;
        return se;
    }

    while (ten <= c && c < (ten * 10))
    {
        ten *= 10;
    }
    */
    while (i != n)
    {
        // se[i] = *c[i];
        cc[i] = c;
        i += 1;
    }
    return cc;
}
