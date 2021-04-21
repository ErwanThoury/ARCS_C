#include <stdio.h>

int top_of_the_hill(int tab[], size_t len)
{
    int i = 0;
    int top;
    int leng = len;
    if (leng == 1)
        return 0;
    while (tab[i] < tab[i + 1])
    {
        if (i == leng - 2)
            return leng - 1;
        i += 1;
    }
    top = i;
    i += 1;
    while (i < leng - 2)
    {
        if (tab[i] < tab[i + 1])
            return -1;
        i += 1;
    }
    return top;
}
