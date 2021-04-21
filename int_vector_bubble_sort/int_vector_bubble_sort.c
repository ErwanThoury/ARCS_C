#include "int_vector_bubble_sort.h"

#include <stdio.h>

static struct int_vector swap(struct int_vector vec, size_t i, size_t j)
{
    int temp = vec.data[i];
    vec.data[i] = vec.data[j];
    vec.data[j] = temp;
    return vec;
}

struct int_vector int_vector_bubble_sort(struct int_vector vec)
{
    size_t i = 0;
    /*
    if (vec.data[0] > vec.data[1])
        vec = swap(vec, 0, 1);
    */
    int boo = 0;
    while (i != vec.size - 1)
    {
        boo = 0;
        if (vec.data[i] > vec.data[i + 1])
        {
            vec = swap(vec, i, i + 1);
            i = 0;
            boo = 1;
        }
        if (boo != 1)
            i += 1;
    }
    return vec;
}
