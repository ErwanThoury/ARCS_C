#include <stdio.h>

int bornInf(int length, int tempTen, int tempN, int tempI)
{
    int born = tempN;
    for (int y = length; y > tempI; y -= 1)
    {
        born = born % tempTen;
        tempTen = tempTen / 10;
    }
    while (born >= 10)
    {
        born = born / 10;
    }
    return born;
}

int lengt(int tempN)
{
    int len = 1;
    int ten = 1;
    int find = 0;
    while (find == 0)
    {
        if ((ten * 10) > tempN && tempN >= ten)
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

int tent(int tempN)
{
    int len = 1;
    int ten = 1;
    int find = 0;
    while (find == 0)
    {
        if ((ten * 10) > tempN && tempN >= ten)
        {
            find = 1;
        }
        else
        {
            len += 1;
            ten *= 10;
        }
    }

    return ten;
}

int int_palindrome(int n)
{
    if (n < 0)
    {
        return 0;
    }
    else if (n < 10)
    {
        return 1;
    }
    else
    {
        int len = lengt(n);
        int ten = tent(n);
        int i = 1;
        int test1;
        int test2;
        int tempTenB = ten;
        int tempN = n;
        while (i != ((len / 2) + 1))
        {
            test1 = tempN / tempTenB;
            tempN = n - test1 * tempTenB;
            tempTenB = tempTenB / 10;
            test2 = bornInf(len, ten, n, i);
            i += 1;
            if (test1 != test2)
            {
                return 0;
            }
        }
    }

    return 1;
}
