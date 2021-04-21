#include <stdio.h>

void plus_equal(int *a, int *b)
{
    /*if (a == NULL)
     *a = *b;*/
    if (b != NULL && a != NULL)
        *a = *a + *b;
}
void minus_equal(int *a, int *b)
{
    /*
    if (a == NULL)
        *a = *b;
    else if (b != NULL)*/
    if (b != NULL && a != NULL)
        *a = *a - *b;
}
void mult_equal(int *a, int *b)
{
    /*
    if (a == NULL)
        *a = *b;
    else if (b != NULL)*/
    if (b != NULL && a != NULL)
        *a = *a * *b;
}
int div_equal(int *a, int *b)
{
    if (a == NULL || b == NULL || *b == 0)
        return 0;
    int temp = *a;
    *a = *a / *b;
    return temp % *b;
}
