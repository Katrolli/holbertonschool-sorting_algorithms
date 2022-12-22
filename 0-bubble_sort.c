#include "sort.h"
void swap(int *array, int j)
{
    int tmp;

    tmp = array[j];
    array[j] = array[j + 1];
    array[j + 1] = tmp;
}

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
