#include "sort.h"

/**
 * selection_sort - Selectively sort an array
 * @array: the array to sort
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	int i, tmp;
	int sorted = 0;
	int j = 0;

	if ((array != NULL) && (size >= 2))
	{
		while (sorted == 0)
		{
			if (j == size)
				j = 0;
			i = 0;
			sorted = 1;
			while ((array[i] != '\0') && (i < size))
			{
				if (array[j] > array[i])
				{
					tmp = array[i];
					array[i] = array[j];
					array[j] = tmp;
					print_array(array, size);
					sorted = 0;
				}
				i++;
			}
			j++;
		}
	}
}
