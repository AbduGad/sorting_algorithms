#include "sort.h"
/**
 * selection_sort- sort an array by selection algorithm
 * @array: array of integers to sort
 * @size: soze of the array to sort
 * Return:  void.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index_to_swap;
	int swaper;

	if (!array || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		index_to_swap = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i])
			{
				index_to_swap = j;
			}
		}
		if (index_to_swap != i)
		{
			swaper = array[index_to_swap];
			array[index_to_swap] = array[i];
			array[i] = swaper;
			print_array(array, size);
		}
		
	}
}
