#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm.
 *
 * @array: Pointer to first element of array.
 * @size: Size of given array.
 */

void selection_sort(int *array, size_t size)
{
	int minimum;
	size_t i, j, index_min;


	for (i = 0; i < size; i++)
	{
		minimum = array[i];
		index_min = i;
		for (j = i; j < size; j++)
		{
			if (minimum > array[j])
			{
				minimum = array[j];
				index_min = j;
			}
		}
		if (index_min != i)
		{
			array[index_min] = array[i];
			array[i] = minimum;
			print_array(array, size);
		}
	}
}
