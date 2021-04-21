#include <stdbool.h>
#include <stdio.h>

bool all(int *array, size_t len, bool (*func)(int))
{
    size_t i = 0;
    while (i != len)
    {
        if (!func(array[i]))
            return false;
        i += 1;
    }
    return true;
}
