#include <stdio.h>

void swap(int i, int j, int *arr)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int parti(int *tabl, int piv, int longu)
{
    int i = 0;
    int j = 0;
    int boo = 0;
    piv += 1;
    while (boo == 0)
    {
        if ((tabl[j] < piv) && (i < j))
        {
            swap(i, j, tabl);
            i += 1;
        }
        else if (tabl[j] < piv)
        {
            i += 1;
        }
        j += 1;
        if (j == longu)
            boo = 1;
    }
    /*int x = 0;
    for (; x < longu - 1; ++x)
        printf("%d ", tabl[x]);
    printf("%d\n", tabl[x]);
    */
    // printf("on a tab[%d] = %d\n", i, tabl[i]);

    return i;
}
void quicksort(int *tab, int len)
{
    if (len >= 2)
    {
        int pivot = tab[len - 1];
        int diff = parti(tab, pivot, len);
        // printf("On a une diff de %d\n", diff);
        int *tabSup = tab + diff - 1;
        quicksort(tab, diff - 1);
        quicksort(tabSup, len - diff + 1);

        /*
        int i = 0;
        for (; i < len - 1; ++i)
            printf("%d ", tab[i]);
        printf("%d\n", tab[i]);
        */
    }
}
/*
int main(void)
{
    unsigned i = 0;
    int tab[] = { 10, 11, 2, 3, 8, 5, 7, 6, 26, 30, 2, 1, 17, 13, 14 };

    unsigned size = sizeof(tab) / sizeof(int);
    for (; i < size - 1; ++i)
        printf("%d ", tab[i]);
    printf("%d\n", tab[i]);
    quicksort(tab, size);
    i = 0;
    for (; i < size - 1; ++i)
        printf("%d ", tab[i]);
    printf("%d\n", tab[i]);

    return 0;
}
*/
