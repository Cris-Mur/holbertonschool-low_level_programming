#include "lists.h"

/**
 * sum_dlistint - add all values of the liked list
 * @head: input doubly linked list
 * Return: result of add all values
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *teemo = head;
	int sum;

	sum = 0;
	while (teemo != NULL)
	{
		sum = sum + teemo->n;
		teemo = teemo->next;
	}
	return (sum);
}
