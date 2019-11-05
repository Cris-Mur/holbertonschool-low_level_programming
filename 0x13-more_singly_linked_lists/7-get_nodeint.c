#include "lists.h"

/**
 * get_nodeint_at_index - get data of specific node
 *
 * Return: node was search
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	while (temp != NULL && index > 0)
	{
		temp = temp->next;
		index--;
	}
	return (temp);
}
