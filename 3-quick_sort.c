#include "sort.h"
/**
 * _pivot - use quick sort and get idx_pivot
 * @array: The array
 * @size: The size of the array
 * @min: The minimum index of the array
 * @max: the maximum index of the array
 * Return: index position of pivot
 */
int _pivot(int *array, size_t size, int min, int max)
{
	int pivot = array[max];
	int runner = min;
	int chaser = min;
	int tmp = 0;

	while (runner < max)
	{
		if (array[runner] < pivot)
		{
			if (runner != chaser && array[runner] != array[chaser])
			{
				tmp = array[runner];
				array[runner] = array[chaser];
				array[chaser] = tmp;
				print_array(array, size);
			}
			chaser++;
		}
		runner++;
	}
	if (max != chaser && array[max] != array[chaser])
	{
		tmp = array[runner];
		array[runner] = array[chaser];
		array[chaser] = tmp;
		print_array(array, size);
	}
	return (chaser);
}
/**
 * split - send chunks with idx pivot limit to sort.
 * @array: array.
 * @size: size of the array.
 * @min: The minimum index of the array.
 * @max: the maximum index of the array.
 */
void split(int *array, size_t size, int min, int max)
{
	int idx_pivot;

	if (min < max)
	{
		idx_pivot = _pivot(array, size, min,  max);
		split(array, size, min, idx_pivot - 1);
		split(array, size, idx_pivot + 1, max);
	}
}
/**
 * quick_sort - Sort an array with quick sort method
 * @array: int array.
 * @size: size of the array.
 */
void quick_sort(int *array, size_t size)
{
	int max = size - 1;
	int min = 0;

	if (size < 2)
		return;
	split(array, size, min, max);
}
