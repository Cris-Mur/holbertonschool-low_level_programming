#include "lists.h"

/**
 * add_dnodeint_end - add new node at end of the list
 * @head: input doubly linked list
 * @n: input new data
 * Return: updated list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *temp;

	temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->prev = temp;
	}
	return (*head);
}
