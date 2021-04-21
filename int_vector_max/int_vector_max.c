#include "int_vector_max.h"

#include <stdio.h>

int int_vector_max(struct int_vector vec)
{
    size_t i = 0;
    int max = vec.data[i];
    while (i != vec.size)
    {
        if (vec.data[i] > max)
            max = vec.data[i];
        i += 1;
    }
    return max;
} //
