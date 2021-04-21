#include "int_vector_hill.h"

#include <stdio.h>

int estNegative(int *arr)
{
    int j = 0;
    int i = 0;
    while (arr[i])
    {
        if (arr[i] < 0)
            j = 1;
        i += 1;
    }
    return j;
}
int int_vector_hill(struct int_vector vec)
{
    int i = 0;
    int top;
    int leng = vec.size;
    int booSomm = 0;
    if (leng == 1)
        return 0;
    if (leng <= 0)
        return -1;
    if (estNegative(vec.data) == 1)
        return -1;

    while (vec.data[i] < vec.data[i + 1])
    {
        if (i == leng - 2)
            return leng - 1;

        if (vec.data[i] >= vec.data[i + 1])
            booSomm = 1;

        if (booSomm == 0)
            i += 1;
    }
    top = i;
    i += 1;
    while (i < leng - 1)
    {
        // printf("vec.data[%d] = %d\n", i + 1, vec.data[i+1]);
        if (vec.data[i] < vec.data[i + 1])
            return -1;
        i += 1;
    }
    return top;
}
/*
int main(void)
{
    struct int_vector vec = {
        .size = 5,
        //.data = {}
        //.data = { 7, 7, 3, 2, 2 }
        //.data = { 0, 0, 7, 4, 3 }
        //.data = { 1, 2, 3, 9, 7, 8, 9, 6, 3 }
        //.data = { 666, 6, 5, 4, 1 }
        //.data = { 666 }
        .data = { -13, -13, 13,13, -13 }
    };

    printf("Sommmmmmmmet --> %d\n", int_vector_hill(vec));
}
*/
