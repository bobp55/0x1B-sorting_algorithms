#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order using
 * the Selection sort algorithm
 * @array: pointer to array
 * @size: size of the array
 **/
void quick_sort_rec(int *array_init, size_t size_init, int *array, size_t size)
{
	size_t j, aux;
	int aux2;
	int i = - 1, n, pivot = array[size - 1];

	//printf("inicio with size:%lu\n", size);
	//print_array(array, size);
	if (array && size > 1)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] < pivot)
			{
				i++;
				aux = i;
				if (aux != j && array[j] != array[aux])
				{
					n = array[j];
					array[j] = array[i];
					array[i] = n;
					print_array(array_init, size_init);
				}
			}


		}
		aux2 = size;
		if (aux2 - 1 != i + 1 && array[aux2 - 1] != array[i + 1])
		{
			array[size - 1] = array[i + 1];
			array[i + 1] = pivot;
			print_array(array_init, size_init);
		}
		//printf("el valor de i antes:%d\n", i);
		if (i > 0)
		{
			quick_sort_rec(array_init, size_init, array, i + 1);
		}
		quick_sort_rec(array_init, size_init, array + i + 2,  size - (i + 2));
	}
}
void quick_sort(int *array, size_t size)
{
	int *array_init;
	size_t size_init;

	if (array)
	{
		array_init = array;
		size_init = size;
		quick_sort_rec(array_init, size_init, array, size);
	}
}
