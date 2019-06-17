#include "sort.h"
/**
 * quick_sort_rec - sorts an array of integers in ascending order using
 * the Selection sort algorithm using recursion
 * @array: pointer to array
 * @size: size of the array
 * @array_init: initial pointer to array
 * @size_init: initial size of the array
 **/

/**
 * quick_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: pointer to array
 * @size: size of the array
**/
void merge_sort(int *array, size_t size)
{
	size_t mid = 0;
	int *left, *right;
	int i;

	mid = size / 2;

	if (size < 2)
		return;
	else
	{
		left = (int*)malloc(sizeof(int) * mid);
		right = (int*)malloc(sizeof(int) * (size - mid));

		for (i = 0; i < mid; i++)
			left[i] = array[i];

		for (i = mid; i < size; i++)
			right[i - mid] = array[i];
	}

	if (array)
	{
		array_init = array;
		size_init = size;
		quick_sort_rec(array_init, size_init, array, size);
	}
}
