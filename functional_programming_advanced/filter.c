#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

size_t filter(int *array, size_t len, int **out_array, bool (*func)(int))
{
    size_t i = 0;
    size_t s_tab = 0;
    while (i != len)
    {
        if (func(array[i]))
            s_tab += 1;
        i += 1;
    }
    out_array = malloc(sizeof(int) * s_tab);
    i = 0;
    int y = 0;
    while (i != len)
    {
        if (func(array[i]))
        {
            *out_array[y] = array[i];
            y += 1;
        }
        i += 1;
    }

    return s_tab;
}
