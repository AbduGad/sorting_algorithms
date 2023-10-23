#include "sort.h"
/**
 * quick_sort - sort an array using quick sort algorithm
 * @array: array  to sort
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	size_t i, j;
	int swaper;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			if (array[i] > array[j])
			{
				swaper = array[i];
				array[i] = array[j];
				array[j] = swaper;
				print_array(array, size);
				check(array, j, i, size);
			}
		}
	}
}
/**
 * check - inverse the sort order
 * @array: array to sort
 * @i: higher index
 * @j: lower index
 * @size: size of the array to sort
 * Return: void.
*/
void check(int *array, size_t i, size_t j, size_t size)
{
	int swaper;

	for (; j < i; j++)
	{
		if (array[i] < array[j])
		{
			swaper = array[i];
			array[i] = array[j];
			array[j] = swaper;
			print_array(array, size);
		}
	}
}
