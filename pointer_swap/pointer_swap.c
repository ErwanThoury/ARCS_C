#include <stdio.h>

void pointer_swap(int **a, int **b)
{
    // **a ==> value: l'adresse de *a, type: int
    int *temp = *a;
    *a = *b;
    *b = temp;
}
