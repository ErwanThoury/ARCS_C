#include <stdio.h>

unsigned int digit(int n, int k)
{
    if ((n <= 0) || (k <= 0))
    {
        return 0;
    }
    int len = 1;
    int ten = 1;
    int find = 0;
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
    for (int j = len; j >= k; j -= 1)
    {
        int bornSup = 1;

        for (int k = 0; k < j; k += 1)
        {
            bornSup *= 10;
        }
        n = n % bornSup;
    }
    int bornInf = 1;

    for (int y = 0; y < (k - 1); y += 1)
    {
        bornInf *= 10;
    }
    n = n / bornInf;
    return n;
}
