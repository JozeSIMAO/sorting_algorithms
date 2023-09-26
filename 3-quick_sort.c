#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using quicksort
 * @array: array to sort
 * @size: size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	qsort_recursion(array, 0, size - 1, size);
}
