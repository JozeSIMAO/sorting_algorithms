#include "sort.h"

/**
 * q_sort_recursion - uses recursion to perform Quick Sort
 * @array: array to sort
 * @low: lower partition
 * @high: higher partition
 * @size: size of the array
 *
 * Return: void
 */
void q_sort_recursion(int *array, size_t low, size_t high, size_t, size)
{
	size_t pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		if (pivot != 0)
			q_sort_recursion(array, pivot + 1, high, size);
	}
}
