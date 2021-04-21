#include <stdio.h>

void bubble_sort(int array[], size_t size)
{
    if (size != 0)
    {
        int temp;
        int go = 0;
        size_t i;
        while (go == 0)
        {
            go = 1;
            for (i = 0; i < size - 1; i += 1)
            {
                if (array[i] > array[i + 1])
                {
                    temp = array[i];
                    array[i] = array[i + 1];
                    array[i + 1] = temp;
                    go = 0;
                }
            }
        }
    }
}
