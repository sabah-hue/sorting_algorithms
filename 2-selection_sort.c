#include "sort.h"

/**
 * selection_sort - sorts an array of integers in
 * ascending order using the Selection sort algorithm
 *
 * Description: A function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: pointer to  a array
 * @size: size of array
 *
 * Return: no thing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int swap, min_value;

	if (!array)
		return;
	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		min_value = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min_value)
			{
				min_index = j;
				min_value = array[j];
			}
		}
		if (min_index != i)
		{
			swap = array[i];
			array[i] = array[min_index];
			array[min_index] = swap;
			print_array(array, size);
		}
	}
}
