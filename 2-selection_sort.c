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
			i = 0;
			sorted = 1;
			while ((array[i] != '\0') || (i < size))
			{
				if (array[j] < array[size - i - 1])
				{
					tmp = array[size - i - 1];
					array[size - i - 1] = array[j];
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
