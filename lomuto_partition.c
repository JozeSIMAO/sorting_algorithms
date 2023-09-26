#include "sort.h"
#include <stddef.h>

/**
 * swap - swaps two integers in an array
 * and prints the array
 * @array: array to sort
 * @a: index of first elem to swap
 * @b: index of 2nd elem to swap
 * @size: size of the array
 *
 * Return: void
 */

void swap(int *array, size_t a, size_t b, size_t size)
{
	int temp;

	if (array[a] != array[b])
	{
		temp = array[a];
		array[a] = array[b];
		array[b] = temp;
	}
}

/**
 * lomuto_partition - lomuto partition for quick sort
 * @array:: array to partition
 * @low: lower partition
 * @high: higher partition
 * @size: size of the array
 *
 * Return: void
 */

size_t lomuto_partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t i = low - 1, j = low;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, i, j, size);
		}
	}
	swap(array, i + 1, high, size);
	return (i + 1);
}	
