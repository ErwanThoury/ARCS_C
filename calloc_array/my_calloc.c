#include <stdio.h>
#include <stdlib.h>

int *my_calloc(size_t size, int init)
{
    // printf("init = %d et size = %ld\n", init, size);
    if (size == 0)
    {
        return NULL;
    }
    // printf("init = %d\n", init);
    /*
    if (init == 0)
        init = 1;
    */
    // printf("init = %d\n", init);
    int *mal = malloc(size * sizeof(int)); //* init);

    if (!mal)
        return NULL;

    else
    {
        size_t i = 0;
        while (i != size)
        {
            mal[i] = init;
            i += 1;
        }
    }
    return mal;
}
