#include "lists.h"

/**
 * pop_listint - delete head of the linked list
 * @head: input linked list
 * Return: data of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (temp != NULL)
	{
		*head = temp->next;
		n = temp->n;
		free(temp);
	}
	return (n);
}
