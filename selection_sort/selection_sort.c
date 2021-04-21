#include <stdio.h>

unsigned array_min(const int arr[], unsigned start, unsigned size)
{
    unsigned int i = start;
    int mini = i;
    while (i < size)
    {
        // printf("arr[%d] = %d ?< mini = %d:\n", i, arr[i], mini);
        if (arr[i] < arr[mini])
        {
            // printf("Oui, Le mini était %d et devient %d\n",arr[mini],arr[i]);
            mini = i;
        }
        i += 1;
    }
    // printf("Le retour de array_mini est : %ld\n",mini);
    return mini;
}

void selection_sort(int arr[], unsigned size)
{
    unsigned int i = 0;
    int mini;
    int temp;
    while (i < size)
    {
        mini = array_min(arr, i, size);
        // printf("%d et %d échangent leur place\n", arr[mini],arr[i]);
        temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;

        i += 1;
    }
}
/*
int main(void)
{
    int arr[] = { 19, 32, 0, -1, 18, 45 };
    int sol[] = { -1, 0, 18, 19, 32, 45 };
    unsigned size = sizeof(arr) / sizeof(int);

    selection_sort(arr, size);

}
*/
