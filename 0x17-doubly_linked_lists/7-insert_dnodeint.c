#include "lists.h"

/**
 * put_mid - put the new node in the middle
 * @nxt: [NEW]->[NXT]
 * @new: <-[NEW]->
 * @prv: [PRV]->[NEW]
 * Return: new node address
 */

dlistint_t *put_mid(dlistint_t *nxt,  dlistint_t *new, dlistint_t *prv)
{
	new->next = nxt;
	prv->next = new;
	nxt->prev = new;
	new->prev = prv;
	return (new);
}

/**
 * insert_dnodeint_at_index - insert in the middle of the list
 * @h: input doubly linked list
 * @idx: number of iterations in the list
 * @n: input new data
 * Return: updated list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int gansito;
	dlistint_t *new, *temp = NULL;

	if (!h)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (idx != 0)
	{
		temp = *h, gansito = 0;
		while (gansito < idx - 1)
		{
			temp = temp->next;
			if (!temp)
			{
				free(new);
				return (NULL);
			}
			gansito++;
		}
		if (temp->next)
			return (put_mid(temp->next, new, temp));
		else
		{
			free(new);
			return (add_dnodeint_end(h, n));
		}
	}
	else
	{
		free(new);
		return (add_dnodeint(h, n));
	}
}
