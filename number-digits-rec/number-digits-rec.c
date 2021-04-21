#include <stdio.h>

unsigned int number_digits_rec(unsigned int n)
{
    unsigned int len = 1;
    unsigned int ten = 1;
    unsigned int find = 0;
    if (n == 0)
    {
        return 1;
    }
    while (find == 0)
    {
        if ((ten * 10) > n && n >= ten)
        {
            find = 1;
        }
        else
        {
            len += 1;
            ten *= 10;
        }
    }
    return len;
}
