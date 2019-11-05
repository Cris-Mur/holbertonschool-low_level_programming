#include "lists.h"

/**
 * free_listint2 - free all nodes in linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *p;

	temp = *head;
	p = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		free(p);
	}
}
