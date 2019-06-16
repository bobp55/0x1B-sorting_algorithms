#include "sort.h"
/**
 *
 *
 *
**/
void shell_sort(int *array, size_t size)
{
	size_t *kunth, k = 0, j = 0;
	(void)array;

	kunth = malloc(sizeof(size_t));
	while (j*3 + 1 < size)
	{
		kunth[k] = j*3 + 1;
		j = kunth[k++];
		kunth = realloc(kunth, k);
	}
	for (j = 0; j < k; j++)
		printf("%lu\n", kunth[j]);
	for (j = 0; j < size; j++)
	{
		while(

}
