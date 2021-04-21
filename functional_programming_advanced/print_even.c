#include <stdio.h>

void print_even(int *array, size_t len)
{
    size_t i = 0;
    while (i != len)
    {
        if (array[i] % 2 == 0)
            printf("%d\n", array[i]);
        i += 1;
    }
}
