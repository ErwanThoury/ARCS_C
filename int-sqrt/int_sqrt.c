#include <stdio.h>

int int_sqrt(int n)
{
    if (n < 0)
    {
        return -1;
    }
    int test1 = 0;
    int test2 = 1;
    while (test1 * test1 < n)
    {
        if (test2 * test2 > n)
        {
            return test1;
        }
        test2 += 1;
        test1 += 1;
    }

    return test1;
}
