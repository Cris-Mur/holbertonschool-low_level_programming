#include "lists.h"

/**
 * delete_nodeint_at_index - delete in the middle id list
 *
 * Return: updated list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *coso = NULL;
	if (*head != NULL)
	{
		if (index > 0)
		{
			while (temp != NULL && index > 0)
			{
				temp = temp->next;
				index--;
			}
			coso = temp->next;
			temp->next = temp->next->next;
			free(coso);
		}
		else if (index == 0)
		{
			coso = temp;
			temp = temp->next;
			*head = temp;
			free(coso);
		}
	}
	else
	{
		return (-1);
	}
	return (1);
}
