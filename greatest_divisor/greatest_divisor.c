#include <stdio.h>

unsigned int greatest_divisor(unsigned int n)
{
    for (int i = (n - 1); i != 0; i -= 1)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return 1;
}
