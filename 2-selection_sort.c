#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using selection sort
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t  i = 0, j = 0;
	int temp, min_value;

	for (i = 0; i < size - 1; i++)
	{
		min_value = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_value] > array[j])
			{
				min_value = j;
			}
		}
		temp = array[i];
		array[i] = array[min_value];
		array[min_value] = temp;

		print_array(array, size);
	}
}
