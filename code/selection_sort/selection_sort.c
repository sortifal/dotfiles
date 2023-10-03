#include <stdio.h>
#include <stddef.h>

unsigned array_min(const int arr[], unsigned start, unsigned size)
{
    int index = start;
    for (int i = start, i < size, i++)
    {
        if (arr[i] < arr[index])
        {
            index = i;
        }
    }
    return index;
}

void selection_sort(int arr[], unsigned size)
{
    for (int i = 0, i < size, i++)
    {
        int min_index = array_min(arr, i, size);
        c = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = arr[i];
    }
}