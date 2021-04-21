#include <stdio.h>

void map(int *array, size_t len, void (*func)(int *))
{
    size_t i = 0;
    int *value;
    while (i != len)
    {
        value = &array[i];
        func(value);
        i += 1;
    }
}

/*
void times_two(int *a)
{
    *a *= 2;
}

int main(void)
{
    int arr[] = {1, 4, 7};
    map(arr, 3, times_two);
    int i = 0;
    while (i != 3)
    {
        printf("%d \n", arr[i]);
        i += 1;
    }
    // arr == {2, 8, 14}
}
*/
