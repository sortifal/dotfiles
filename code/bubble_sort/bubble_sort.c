#include <stdio.h>
#include <stddef.h>

int is_sorted(int array[], size_t size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (array[i] > array[i+1])
        {
            return 1;
        }
    }
    return 0;
}

void swap(int array[], int a, int b)
{
    int swp = array[a];
    array[a] = array[b];
    array[b] = swp;
}

void bubble_sort(int array[], size_t size)
{
    while (is_sorted(array, size) != 0)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i+1])
            {
                swap(array, i, i+1);
            }
        }
    }
}

