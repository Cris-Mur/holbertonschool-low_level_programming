#include "lists.h"

/**
 * add_dnodeint - function that add new node in the beginning
 * @head: input double linked list
 * @n: input new data
 * Return: updated linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
