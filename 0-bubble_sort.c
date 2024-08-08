#include "sort.h"

/**
 * bubble_sort - Sort an array
 * @array: the array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int sorted, tmp;
	size_t i;

	if ((array != NULL) || (size >= 2))
	{
		sorted = 0;
		while (sorted == 0)
		{
			i = 1;
			sorted = 1;
			while ((array[i] != '\0') && (i < size))
			{
				if (array[i] < array[i - 1])
				{
					tmp = array[i - 1];
					array[i - 1] = array[i];
					array[i] = tmp;
					print_array(array, size);
					sorted = 0;
				}
				i++;
			}
		}
	}
}
