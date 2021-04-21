#include <stdio.h>
// #include <limits.h>

void array_max_min(int tab[], size_t len, int *max, int *min)
{
    if (tab != NULL && len != 0)
    {
        // *min = INT_MAX;
        // *max = INT_MIN;
        *min = tab[0];
        *max = tab[0];
        for (size_t i = 1; i < len; i += 1)
        {
            if (tab[i] < *min)
                *min = tab[i];
            if (tab[i] > *max)
                *max = tab[i];
        }
    }
}
