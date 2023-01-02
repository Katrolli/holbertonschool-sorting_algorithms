#include "sort.h"
/**
 * quick_sort - calls lomuto sort
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lomuto(array, 0, size - 1, size);
}
/**
 * lomuto - function that partitions the array
 * @array: array to be sorted
 * @low: first element of array
 * @high: last element of array
 * @size: size of array
 */
void lomuto(int *array, int low, int high, size_t size)
{
	int part;

	if (low < high)
	{
		part = partition(array, low, high, size);
		lomuto(array, low, part - 1, size);
		lomuto(array, part + 1, high, size);
	}
}
/**
 * partition - function that swaps elements of array
 * @array: array to be sorted
 * @low: first element of array
 * @high: last element of array
 * @size: size of array)
 * Return: returns the index after swap
 */
int partition(int *array, int low, int high, size_t size)
{
	int i, j, pivot, tmp;

	pivot = array[high];
	i = (low - 1);
	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		tmp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}
