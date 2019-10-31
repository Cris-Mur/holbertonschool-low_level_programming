#include "lists.h"

/**
 * add_node - generate a new nodo and add in the list
 * @head: list to modify
 * @str: input string
 * Return: list updated
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
