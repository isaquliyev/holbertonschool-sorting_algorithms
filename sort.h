#ifndef SORT_H
#define SORT_H

/*Libraries*/
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/*STRUCTURES*/

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/*FUNCTION PROTOTYPES*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t *first, listint_t *second);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int *quick_sort_recursive(int *array, int low, int high, int size);
#endif
