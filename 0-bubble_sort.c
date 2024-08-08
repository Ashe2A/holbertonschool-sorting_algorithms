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
		sorted = 0;
		while (sorted == 0)
		{
			sorted = 1;
			while (i < size)
			{
				if (array[i] < array[i - 1])
				{
					tmp = array[i - 1];
					array[i - 1] = array[i];
					array[i] = tmp;
					sorted = 0;
				}
				i++;
			}
		}
	}
}