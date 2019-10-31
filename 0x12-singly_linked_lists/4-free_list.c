#include "lists.h"

/**
 * free_list - free all nodes of a list
 * @head: input list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;
	temp = head;
	while (temp != NULL)
	{
		free(temp->str);
		temp->len = 0;
		temp = temp->next;
	}
}
