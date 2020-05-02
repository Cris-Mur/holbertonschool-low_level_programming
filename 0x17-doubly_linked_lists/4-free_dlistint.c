#include "lists.h"

/**
 * free_dlistint - free all list
 * @head: input doubly linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
