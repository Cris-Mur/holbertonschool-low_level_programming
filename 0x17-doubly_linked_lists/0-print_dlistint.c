#include "lists.h"

/**
 * print_dlistint - function that dyplay double linked list info
 * @h: input double linked list
 * Return: size of the structure
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size;
	const dlistint_t *head = h;

	size = 0;

	if (h->prev == NULL && h != NULL)
	{
		while (head != NULL)
		{
			printf("%d\n", head->n);
			head = head->next;
			size++;
		}
	}
	return (size);
}
