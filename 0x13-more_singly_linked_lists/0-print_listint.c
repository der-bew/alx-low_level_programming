#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: list to print
 * Return: the number of nodes
 * Format: see example
 * You are allowed to use printf
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
