#include <stdio.h>

unsigned long fibonacci(unsigned long n)
{
    // long fibon = n
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    // return fibon;
}
