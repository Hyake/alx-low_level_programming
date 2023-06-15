#include "lists.h"

/**
 * dlistint_len - to find the length of the linked list
 * @h: pointer to the head of the list
 * Return: the number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t k;

	for (k = 0; h != NULL; k++)
		h = h->next;

	return (k);
}

