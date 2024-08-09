#include "sort.h"

/**
 * insertion_sort_list - Sort an array with insertion
 * @list: the array to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
	listint_t *current_node = list[0];

	if ((list != NULL) && (current_node->next != NULL))
	{
		current_node = current_node->next;
		while (current_node != NULL)
		{
			if ((current_node->prev != NULL)
			&& (current_node->n < current_node->prev->n))
			{
				tmp = (current_node->prev);
				current_node->prev = current_node->prev->prev;
				if (current_node->prev != NULL)
					current_node->prev->next = current_node;
				else
					list[0] = current_node;
				tmp->next = current_node->next;
				if (current_node->next != NULL)
					current_node->next->prev = tmp;
				current_node->next = tmp;
				tmp->prev = current_node;
				print_list(list[0]);
			}
			else
				current_node = current_node->next;
		}
	}
}
