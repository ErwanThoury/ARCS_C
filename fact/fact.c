#include <stdio.h>

unsigned long fact(unsigned n)
{
    long facto = n;

    if (n == 0)
    {
        return 1;
    }

    if (n != 1)
    {
        return facto * fact(n - 1);
    }
    return facto;
}
