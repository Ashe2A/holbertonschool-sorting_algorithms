#include "sort.h"

/**
 * selection_sort - Selectively sort an array
 * @array: the array to sort
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	int sorted = 0;
	int tmp;
	size_t j = 0;

	if ((array != NULL) && (size >= 2))
	{
		while (sorted == 0)
		{
			if (j == size)
				j = 0;
			i = size;
			sorted = 1;
			while (i >= 0)
			{
				if (array[j] > array[i])
				{
					tmp = array[i];
					array[i] = array[j];
					array[j] = tmp;
					print_array(array, size);
					sorted = 0;
				}
				i--;
			}
			j++;
		}
	}
}
