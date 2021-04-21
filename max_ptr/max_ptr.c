#include <limits.h>
#include <stdio.h>

int max_ptr(int *ptr, size_t size)
{
    if (size == 0)
    {
        return INT_MIN;
    }
    int retour = INT_MIN;
    for (size_t i = 0; i < size; i += 1)
    {
        if (ptr[i] > retour)
        {
            retour = ptr[i];
        }
    }
    return retour;
}
