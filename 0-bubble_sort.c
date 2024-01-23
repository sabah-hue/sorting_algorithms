#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 *
 * Description: A function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: pointer to array need to be sorted
 * @size: size of array
 *
 * Return: no thing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	int check_swap = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				check_swap = 1;
			}
			print_array(array, size);
		}
		if (check_swap == 0)
			break;
	}
}
