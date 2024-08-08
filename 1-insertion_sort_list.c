#include "sort.h"

/**
 * bubble_sort - Sort an array
 * @list: the array to sort
 */
void insertion_sort_list(listint_t **list)
{
	int tmp, i;

	if ((array != NULL) || (size >= 2))
	{
		i = 1;
		while ((list[i])->next != NULL)
		{
			if ((list[i])->n < (list[i])->prev->n)
			{
				tmp = (list[i])->prev->n;
				(list[i])->prev->n = (list[i])->n;
				(list[i])->n = tmp;
				print_list(list[0]);
				i--;
			}
			else
				i++;
		}
	}
}
