#include "lists.h"

/**
 * insert_dnodeint_at_index - insert in the middle of the list
 * @h: input doubly linked list
 * @idx: number of iterations in the list
 * @n: input new data
 * Return: updated list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	unsigned int gansito;
	dlistint_t *temp = *h;
	dlistint_t *teemoNXT = *h;

	if (!h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx != 0)
	{
		gansito = 0;
		while (gansito < idx - 1)
		{
			temp = temp->next;
			if (temp == NULL)
			{
				free(new);
				return (NULL);
			}
			gansito++;
		}
		teemoNXT = temp->next;
		new->next = teemoNXT;
		temp->next = new;
		teemoNXT->prev = new;
		new->prev = temp;
	}
	else
	{
		new->next = *h;
		*h = new;
	}
	return (new);
}
