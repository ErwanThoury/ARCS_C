#include <stdio.h>

int pine(unsigned n)
{
    if (n < 3)
    {
        return 1;
    }
    unsigned trunk = n / 2;
    unsigned i = 0;
    unsigned y = 1;
    unsigned j;
    while (i != n)
    {
        for (j = 0; j < n - y; j += 1)
        {
            putchar(' ');
        }
        for (j = 0; j < y; j += 1)
        {
            putchar('*');
        }
        for (j = 0; j < y - 1; j += 1)
        {
            putchar('*');
        }
        putchar('\n');
        i += 1;
        y += 1;
    }
    for (j = 0; j < trunk; j += 1)
    {
        for (y = 0; y < (n - 1); y += 1)
        {
            putchar(' ');
        }
        putchar('*');
        putchar('\n');
    }

    return 0;
}
