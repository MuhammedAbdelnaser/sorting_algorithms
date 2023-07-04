#include "sort.h"

/**
 * selection_sort - sort an array of integers using selection sort
 *
 * @array: the array to order
 * @size: the siz of the array to order
 */
void selection_sort(int *array, size_t size)
{
	unsigned int x = 0, y = 0, min_idx;
	int temp;

	for (x = 0; x < size - 1; x++)
	{
		min_idx = x;
		for (y = x + 1; y < size; y++)
			if (array[y] < array[min_idx])
			{
				min_idx = y;
			}
		if (min_idx != x)
		{
			temp = array[min_idx];
			array[min_idx] = array[x];
			array[x] = temp;
			print_array(array, size);

		}
	}
}
