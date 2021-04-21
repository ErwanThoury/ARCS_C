#include "int_vector_min.h"

#include <stdio.h>

int int_vector_min(struct int_vector vec)
{
    size_t i = 0;
    int min = vec.data[i];
    while (i != vec.size)
    {
        if (vec.data[i] < min)
            min = vec.data[i];
        i += 1;
    }
    return min;
}
