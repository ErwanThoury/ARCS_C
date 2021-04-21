#include <stdio.h>

int foldl(int *array, size_t len, int (*func)(int, int))
{
    size_t i = 0;
    int retour = 0;
    while (i != len)
    {
        retour = func(retour, array[i]);
        i += 1;
    }
    return retour;
}

int sum(int a, int b)
{
    return a + b + b;
}

int main(void)
{
    int arr[] = { 1, 4, 7 };
    int test = foldl(arr, 3, sum);

    printf("%d \n", test);
    // arr == {2, 8, 14}
}
