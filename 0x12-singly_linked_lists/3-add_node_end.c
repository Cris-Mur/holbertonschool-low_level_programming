#include "lists.h"
/**
 * sizesito - funtion that conunt string
 * @str: input string
 * Return: size of string
 */

unsigned int sizesito(const char *str)
{
	size_t n;

	for (n = 0; str[n]; n++)
	{
	}

	return (n);
}

/**
 * add_node_end - add in the end of list
 * @head: input linked list
 * @str: input string
 * Return: dir of list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (temp != NULL)
	{
		new->str = strdup(str);
		new->len = sizesito(str);
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
	{
		new->str = strdup(str);
		new->len = sizesito(str);
		new->next = *head;
		*head = new;
	}
	return (*head);
}
