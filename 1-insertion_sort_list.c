#include "sort.h"

/**
 * bubble_sort - Sort an array
 * @list: the array to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
	listint_t *current_node = list[0];

	if ((list != NULL) && (current_node->next != NULL))
	{
		current_node = current_node->next;
		while (current_node->next != NULL)
		{
			if (current_node->n < current_node->prev->n)
			{
				tmp = current_node->prev;
				if (current_node->prev->prev != NULL)
				{
					current_node->prev = current_node->prev->prev;
					current_node->prev->next = current_node;
				}
				else
					current_node->prev = NULL;
				if (current_node->next != NULL)
				{
					tmp->next = current_node->next;
					current_node->next = tmp;
				}
				else
				current_node->next = tmp;
				tmp->prev = current_node;

				print_list(list[0]);
				current_node = current_node->prev;
			}
			else
				current_node = current_node->next;
		}
	}
}
