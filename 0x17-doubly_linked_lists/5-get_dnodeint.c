#include "lists.h"

/**
 * get_dnodeint_at_index - obtain one node by his index
 * @head: input doubly linked list
 * @index: number of iterations in the list
 * Return: node was search
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *teemo = head;

	while (teemo != NULL && index > 0)
	{
		teemo  = teemo->next;
		index--;
	}
	return (teemo);
}
