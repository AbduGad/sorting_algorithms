#include "sort.h"
/**
 * bubble_sort - sort an array using bubble sort algorithm
 * @array: array to sort
 * @size: size of the array to sort
 * Return: void.
 */
void bubble_sort(int *array, size_t size)
{
	int swaper, swaped = 1;
	size_t j;

	while (swaped)
	{
		swaped = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swaper = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swaper;
				swaped = 1;
				print_array(array, size);
			}
		}
	}
}
