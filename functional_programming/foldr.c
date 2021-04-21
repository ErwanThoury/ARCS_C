#include <stdio.h>

int foldr(int *array, size_t len, int (*func)(int, int))
{
    size_t i = len;
    int retour = 0;
    while (i != 0)
    {
        retour = func(array[i - 1], retour);
        i -= 1;
    }
    return retour;
}
/*
int sum(int a, int b)
{
    return a + b + b;
}

int main(void)
{
    int arr[] = { 1, 4, 7 };
    int test = foldr(arr, 3, sum);

    printf("%d \n", test);
    // arr == {2, 8, 14}
}
*/
