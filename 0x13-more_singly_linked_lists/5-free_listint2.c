#include "lists.h"

/**
 * free_listint2 - free all nodes in linked list
 * @head: input linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nxt;
	listint_t *temp = *head;
	if (*head != NULL)
		return;

	while (temp != NULL)
	{
		nxt = temp->next;
		free(temp);
		temp = nxt;
	}
	*head = NULL;
}
