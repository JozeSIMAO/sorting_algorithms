#include "sort.h"
#include <stddef.h>

/**
 * swap - Swap two integers in an array.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Return: void.
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - Lomuto partition for quick sort.
 * @array: The array to sort.
 * @size: Size of the array.
 * @low: Index of the subset to order.
 * @high: Index of the subset to order.
 *
 * Return: Final partition index.
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int *pivot = array + high;
	int i = low - 1, j = 0;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < *pivot)
		{
			i++;
			if (i != j)
			{
				swap(array + i, array + j);
				print_array(array, size);
			}
		}
	}

	if (array[i + 1] > *pivot)
	{
		swap(array + i + 1, pivot);

		print_array(array, size);
	}

	return (i + 1);
}

/**
 * q_sort - quicksort algorithm using recursion
 * @array: Array to sort
 * @size: size of the array
 * @low: index of the array partition to order.
 * @high: Ending index of the array partition to order
 * Description: Uses the Lomuto partition
 *
 * Return: void
 */
void q_sort(int *array, size_t size, int low, int high)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, size, low, high);
		q_sort(array, size, low, pivot - 1);
		q_sort(array, size, pivot + 1, high);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending order using quicksort.
 * @array: Array to sort.
 * @size: Size of the array.
 *
 * Return: void.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	q_sort(array, size, 0, size - 1);
}
