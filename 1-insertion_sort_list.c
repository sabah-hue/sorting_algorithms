#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * Description: A function that sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: pointer to  a doubly linked list
 *
 * Return: no thing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, node;

	if (*list == NULL || (*list)->next == NULL)
		return;
	nextNode = *list;
	while(nextNode->next != NULL)
	{
		current = nextNode->next;
		while(nextNode->n > current->n)
		{

		}
		nextNode = nextNode->next;
	}
}
