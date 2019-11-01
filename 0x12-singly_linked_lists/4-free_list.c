#include "lists.h"

/**
 * free_list - free all nodes of a list
 * @head: input list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		head->str = NULL;
		head->len = 0;
		free_list(head->next);
	}
	free(head);
}
