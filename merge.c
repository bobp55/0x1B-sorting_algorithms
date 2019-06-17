#include "sort.h"
/**
 * quick_sort_rec - sorts an array of integers in ascending order using
 * the Selection sort algorithm using recursion
 * @array: pointer to array
 * @size: size of the array
 * @array_init: initial pointer to array
 * @size_init: initial size of the array
 **/
void merge(int *a, int *l, int *r, size_t size)
{
	int i = 0, j = 0, k = 0;
	int size_l, size_r;

	size_l = size / 2;
	size_r = size - size_l;
	printf("[left]: ");
	print_array(l, size_l);

	while (i < size_l && j < size_r)
	{
		if (l[i] < r[j])
			a[k++] = l[i++];
		else
			a[k++] = r[j++];
	}

	while (i < size_l)
		a[k++] = l[i++];

	while (j < size_r)
		a[k++] = r[j++];
}
/**
 * quick_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: pointer to array
 * @size: size of the array
 **/
void merge_sort(int *array, size_t size)
{

	size_t mid = 0;
	size_t i;
	int left[1000];
	int right[1000];

	if (!array)
		return;

	mid = size / 2;

	if (size < 2)
		return;
	else
	{
		/*left = (int*)malloc(sizeof(int) * mid);*/
		/*right = (int*)malloc(sizeof(int) * (size - mid));*/
		for (i = 0; i < mid; i++)
		{
			left[i] = array[i];
		}

		for (i = mid; i < size; i++)
		{
			right[i - mid] = array[i];
		}

		merge_sort(left, mid);
		merge_sort(right, size - mid);
		merge(array, left, right, size);
	}
}
