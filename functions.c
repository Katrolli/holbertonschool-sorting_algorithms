#include <stdlib.h>
#include <stdio.h>

void swap(int *array, int j)
{
    int tmp;

    tmp = array[j];
    array[j] = array[j + 1];
    array[j + 1] = tmp;
}
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
