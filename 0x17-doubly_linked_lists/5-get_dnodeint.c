#include "lists.h"

/**
 * get_dnodeint_at_index - function to get node at given index
 * @head: pointer to the beginning of the list
 * @index: index to get the node at
 * Return: head
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k;

	if (head == NULL)
		return (NULL);

	for (k = 0; head != NULL && k < index; k++)
	{
		head = head->next;
	}
	return (head);
}

