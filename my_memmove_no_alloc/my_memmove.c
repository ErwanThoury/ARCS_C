#include <stdio.h>

void *my_memmove(void *dest, const void *src, size_t n)
{
    char *op = dest;
    char const *po = src;
    size_t i = 0;

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
    // pop
    while (i != 0)
    {
        i -= 1;
        op[i] = po[i];
    }

    return dest;
}
