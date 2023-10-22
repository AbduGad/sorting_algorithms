#include "sort.h"
/**
 * bubble_sort - sort an array using bubble sort algorithm
 * @array: array to sort
 * @size: size of the array to sort
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	int swaper;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swaper = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swaper;
				print_array(array, size);
			}
		}
	}
}
