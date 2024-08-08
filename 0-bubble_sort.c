#include "sort.h"

/**
 * bubble_sort - Sort an array
 * @array: the array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i, sorted;

	if ((array != NULL) || (size < 2))
	{
		i = 1;
		sorted = 1;
		while (i < size)
		{
			if (array[i] > array[i - 1])
			{
				tmp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = tmp;
				sorted = 0;
			}
			i++;
			if (i == size)
			{
				if (sorted == 1)
					break;
				if (sorted == 0)
					i = 0;
			}
		}
	}
}