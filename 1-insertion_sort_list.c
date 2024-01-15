#include "sort.h"
#include "swap_nodes.c"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm.
 *
 * @list: Pointer to pointer to first node of Double Linked List.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list;

	while (*list)
	{
		while (*list && (*list)->prev
				&& (*list)->prev->n > (*list)->n)
		{
			swap_nodes((*list)->prev, *list);
			while (temp->prev)
			{
				temp = temp->prev;
			}
			print_list(temp);
		}
		*list = (*list)->next;
	}
	*list = temp;
}
