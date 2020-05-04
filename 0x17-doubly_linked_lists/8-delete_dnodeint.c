#include "lists.h"

/**
 * del_head - delete tail of the list
 * @h: input doubly linked list
 * Return: (1) if success, (-1) if fail
 */
int del_head(dlistint_t **h)
{
	dlistint_t *temp = NULL;

	if (!h || *h == NULL)
		return (-1);
	temp = *h;
	if (temp->next)
	{
		*h = (*h)->next;
		(*h)->prev = NULL;
	}
	else
	{
		free_dlistint(*h);
		*h = NULL;
		h = NULL;
		return (1);
	}
	free(temp);
	return (1);
}

/**
 * del_end - delete tail of the list
 * @h: input doubly linked list
 * Return: (1) if success, (-1) if fail
 */
int del_end(dlistint_t **h)
{
	dlistint_t *temp = NULL;

	if (!h)
		return (-1);
	temp = *h;
	while (temp->next)
	{
		temp = temp->next;
	}
	free(temp);
	return (1);
}

/**
 * del_middle - delete node at in the middle
 * @nxt: input next node
 * @node: input node to delete
 * @prv: input previous node
 * Return: (1) if success, (-1) if fail
 */
int del_middle(dlistint_t *nxt, dlistint_t *node, dlistint_t *prv)
{
	prv->next = nxt;
	nxt->prev = prv;
	free(node);
	return (1);
}

/**
 * delete_dnodeint_at_index - delete node at input index
 * @head: input linked list
 * @index: input index to delete
 * Return: (1) if success, (-1) if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int gansito;
	dlistint_t *temp = NULL;

	if (!head || *head == NULL)
		return (-1);

	if (index != 0)
	{
		temp = *head, gansito = 0;
		while (gansito < index)
		{
			temp = temp->next;
			if (!temp)
			{
				return (-1);
			}
			gansito++;
		}
		if (temp->next)
		{
			return (del_middle(temp->next, temp, temp->prev));
		}
		else
		{
			return (del_end(head));
		}
	}
	else
	{
		return (del_head(head));
		
	}
}
