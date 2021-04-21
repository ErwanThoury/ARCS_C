#include "int_vector_insert_sort.h"

#include <stdio.h>

static struct int_vector swap(struct int_vector vec, size_t i, size_t j)
{
    int temp = vec.data[i];
    vec.data[i] = vec.data[j];
    vec.data[j] = temp;
    return vec;
}

struct int_vector int_vector_insert_sort(struct int_vector vec)
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

    /*
        if (vec.size != 0)
        {

            int go = 0;
            size_t i;
            while (go == 0)
            {
                go = 1;
                for (i = 0; i < vec.size - 1; i += 1)
                {
                    if (vec.data[i] > vec.data[i + 1])
                    {
                        printf("printf was here\n");
                        vec = swap(vec, i, i + 1);
                        go = 0;
                    }
                }
            }
        }
    */
}
/*
int main()
{
    struct int_vector vec =
    {
        .size = 5,
        .data = {7,5,3,6,4}
    };

    size_t i = 0;
    while (i != vec.size)
    {
        printf("%d ", vec.data[i]);
        i += 1;
    }

    vec = int_vector_insert_sort(vec);
    printf("\n");

    i = 0;
    while (i != vec.size)
    {
        printf("%d ", vec.data[i]);
        i += 1;
    }

    // vec should be 0 1 4 3 2

    return 0;
}
*/
