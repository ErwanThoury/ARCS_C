#include <stdbool.h>
#include <stdio.h>

bool any(int *array, size_t len, bool (*func)(int))
{
    size_t i = 0;
    while (i != len)
    {
        if (func(array[i]))
            return true;
        i += 1;
    }
    return false;
}
