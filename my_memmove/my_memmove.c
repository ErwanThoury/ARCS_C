#include <stdio.h>
#include <stdlib.h>

void *my_memmove(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    char *op = dest;
    char const *po = src;

    if (dest == NULL && src == NULL)
    {
        return NULL;
    }
    while (i != n)
    {
        i += 1;
    }
    if ((op < po) && (po < op + n))
    {
        size_t j = 0;
        while (j != n)
        {
            op[j] = po[j];

            j += 1;
        }

        return dest;
    }
    while (i != 0)
    {
        i -= 1;
        op[i] = po[i];
    }
    // free(src);
    return dest;
}
