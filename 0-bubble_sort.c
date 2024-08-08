#include "sort.h"

/**
 * bubble_sort - Sort an array
 * @array: the array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i, sorted, tmp;

	if ((array != NULL) || !(size >= 2))
	{
		i = 1;
		sorted = 0;
		while (sorted == 0)
		{
			sorted = 1;
			while (array[i] != '\0')
			{
				if (array[i] < array[i - 1])
				{
					tmp = array[i - 1];
					array[i - 1] = array[i];
					array[i] = tmp;
					print_array(array);
					sorted = 0;
				}
				i++;
			}

		}
	}
}