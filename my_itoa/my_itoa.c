#include <stdio.h>

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
            if (ten == 1000000000)
            {
                find = 1;
            }
        }
    }

    return len;
}
/*
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
            if (ten == 1000000000)
            {
                find = 1;
            }
        }
    }

    return ten;
}
*/
int defi(int ib, int lenb)
{
    if (ib == 1)
        return lenb + 1;
    else
        return lenb;
}
char *my_itoa(int value, char *s)
{
    int i = 0;

    if (value < 0)
    {
        value *= -1;

        s[i] = '-';
        i += 1;
    }
    /*
    int len = 1; //= lengt(n);
    int ten = 1; //= tent(n);
    int find = 0;
    */
    int len = lengt(value);
    // int ten = tent(value);
    if (value == 0)
    {
        s[0] = '0';
        s[1] = '\0';
        return s;
    }
    if (value < 10)
    {
        s[i] = value + 48;
        s[i + 1] = '\0';
    }
    /*
    while (find == 0)
    {
        if ((ten * 10) > value && value >= ten)
        {
            find = 1;
        }
        else
        {
            len += 1;
            ten *= 10;
            if (ten == 1000000000)
                find = 1;
        }
    }
    */
    /*
    if (i == 1)
        i = len + 1;
    else
        i = len;
    */
    i = defi(i, len);
    int reste;
    int born = value;

    int tempi = i - len;
    s[i] = '\0';
    while (i > tempi)
    {
        i -= 1;
        reste = born % 10;
        born = born / 10;

        s[i] = reste + 48;
    }

    return s;
}
