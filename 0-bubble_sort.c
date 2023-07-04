#include "sort.h"

/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	unsigned int x = 0, y = 0;

	if (size <= 1)
	{
		return;
	}

	for (x = 0; x < (size - 1); x++)
		for (y = 1; y < size; y++)
			if (array[y - 1] > array[y])
			{
				temp = array[y - 1];
				array[y - 1] = array[y];
				array[y] = temp;
				print_array(array, size);
			}
}
