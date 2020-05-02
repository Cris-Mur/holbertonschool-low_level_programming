#include "lists.h"

/**
 * dlistint_len - displays length of the list
 * @h: inpt double linked list
 * Return: size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size;
	const dlistint_t *temp = h;

	size = 0;
	if (h != NULL)
	{
		while (temp)
		{
			temp = temp->next;
			size++;
		}
	}
	return (size);
}
