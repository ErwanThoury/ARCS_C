#include <stdio.h>

int *add_int_ptr(int *a, int *b)
{
    if (!a)
        return NULL;
    if (!b)
        return a;
    *a = *a + *b;
    return a;
}
