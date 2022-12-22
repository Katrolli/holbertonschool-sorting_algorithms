#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    size_t i, j;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (j + 1 >= size)
                break;
            if (array[j] > array[j + 1])
            {
                swap(array, j);
                print_array(array, size);
            }
        }
    }
}
