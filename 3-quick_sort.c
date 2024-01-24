 #include "sort.h"

/**
 * quick_sort - sorts an array of integers in
 * ascending order using the Quick sort algorithm
 *
 * Description: A function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: pointer to a array
 * @size: size of array
 *
 * Return: no thing
 */
void quick_sort(int *array, size_t size)
{
	int start, end;

	start = 0;
	end = (int)size - 1;
	if (array == NULL || size < 2)
		return;
	quick_recursive(array, start, end, size);
}


/**
 * quick_recursive - quick sort recursion to set pivot
 *
 * Description: A function that implement and set pivot position
 * @array: pointer to  a array
 * @start: start element in array
 * @end: last element in array
 * @size: size of array
 *
 * Return: no thing
 */

void quick_recursive(int *array, int start, int end, int size)
{
	int p;

	if (start < end)
	{
		p = Lomuto_scheme(array, start, end, size);
		quick_recursive(array, start, p - 1, size);
		quick_recursive(array, p + 1, end, size);
	}
}


/**
 * Lomuto_scheme - finding the partitiomposition
 *
 * Description: A function that inding the partition position
 * @array: pointer to  a array
 * @start: start element in array
 * @end: last element in array
 * @size: size of array
 *
 * Return: index of pivot
 */
int Lomuto_scheme(int *array, int start, int end, int size)
{
	int pivot, j, tmp, i = start;

	pivot = array[end];
	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != j)
	{
		tmp = array[i];
		array[i] = array[end];
		array[end] = tmp;
		print_array(array, size);
	}
	return (i);
}
