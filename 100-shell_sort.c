#include "sort.h"
/**
 *
 *
 *
**/
void shell_sort(int *array, size_t size)
{
	size_t *inter, i = 0, j = 0;
	(void)array;

	inter = malloc(sizeof(size_t) * size/2);
	while (inter[i] < size)
	{
		inter[i] = j*3 + 1;
		j = inter[i];
		i++;
	}
	for (i = 0; i < size/2; i++)
		printf("%lu\n", inter[i]);
}
