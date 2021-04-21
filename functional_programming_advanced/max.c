#include <stdio.h>

int max(int *array, size_t len)
{
    size_t i = 0;
    int max = array[i];
    i += 1;
    while (i != len)
    {
        if (array[i] > max)
            max = array[i];
        i += 1;
    }
    return max;
}
