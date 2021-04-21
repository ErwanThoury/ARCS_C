#include <stdio.h>

int my_pow(int a, int b)
{
    int tempA = a;
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    if (b == 2)
    {
        return a * a;
    }
    int i = 0;
    a = tempA * tempA;
    while (i != ((b / 2) - 1))
    {
        a = a * tempA * tempA;

        i += 1;
    }
    if (b % 2 == 1)
    {
        a *= tempA;
    }

    return a;
}
