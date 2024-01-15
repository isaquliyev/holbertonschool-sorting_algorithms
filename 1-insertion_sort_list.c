#include "sort.h"

/**
 * swap_nodes - Swaps two given nodes of double
 * linked list.
 *
 * @first: First node.
 * @second: Second node.
 */

void swap_nodes(listint_t *first, listint_t *second)
{
	listint_t *temp;

	temp = first->prev;
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = temp;
	first->prev = second;
	second->next = first;
	if (temp)
		temp->next = second;
	first = second;
}

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
