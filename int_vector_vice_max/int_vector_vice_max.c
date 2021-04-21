#include "int_vector_vice_max.h"

#include <limits.h>
#include <stdio.h>

int int_vector_vice_max(const struct int_vector vec)
{
    size_t i = 0;
    int max = vec.data[i];
    int vice;
    /*
    if (vec.data[i] > vec.data[i + 1])
    {
        vice = vec.data[i + 1];
        max = vec.data[i];
    }
    else
    {
        vice = vec.data[i];
        max = vec.data[i + 1];
    }
    */
    while (i != vec.size)
    {
        if (vec.data[i] > max)
            max = vec.data[i];
        i += 1;
    }
    i = 0;
    if (max != vec.data[i])
        vice = vec.data[i];
    else
        vice = vec.data[i + 1];
    while (i != vec.size)
    {
        if ((vec.data[i] > vice) && (vec.data[i] != max))
            vice = vec.data[i];
        i += 1;
    }

    return vice;
}
/*
int main(void)
{
    const struct int_vector p =
    {
        .size = 5,
        .data = {5,1,2,6,3}
    };
    printf("vice ==> %d\n", int_vector_vice_max(p));
}
*/
