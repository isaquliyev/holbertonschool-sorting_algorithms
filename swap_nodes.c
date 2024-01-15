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

