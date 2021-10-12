#include "lists.h"

/**
 * *add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: the head of the list
 * @n: Added element
 * Return: the address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	if (!head)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
