#include "sort.h"

/**
 *quick_sort - sorts an array with quick sort algorithm
 *@array: array
 *@size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
	{
		return;
	}
	quickSort(array, 0, size - 1, size);
}

/**
 *quickSort - quick sort algorithm implementation
 *@array: array
 *@first: first array element
 *@last: last array element
 *@size: array size
 */
void quickSort(int *array, int first, int last, int size)
{
	int pos = 0;


	if (first < last)
	{
		pos = lomuto_partition(array, first, last, size);

		quickSort(array, first, pos - 1, size);
		quickSort(array, pos + 1, last, size);
	}
}

/**
 *lomuto_partition - lomuto partition sorting scheme implementation
 *@array: array
 *@first: first array element
 *@last: last array element
 *@size: array size
 *Return: return the position of the last element sorted
 */
int lomuto_partition(int *array, int first, int last, int size)
{
	int pivot = array[last];
	int curr = first, x;

	for (x = first; x <= last - 1; x++)
	{
		if (array[x] < pivot)
		{
			if (array[curr] != array[x])
			{
				swap(&array[curr], &array[x]);
				print_array(array, size);
			}
			curr++;
		}
	}
	if (array[curr] != array[last])
	{
		swap(&array[curr], &array[last]);
		print_array(array, size);
	}
	return (curr);
}

/**
*swap - the positions of two elements into an array
*@a: array element
*@b: array element
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
