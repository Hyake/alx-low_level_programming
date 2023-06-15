#include "lists.h"

/**
 * sum_dlistint - add all elements of a list
 * @head: ptr to the beginning of the list
 * Return: add of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	int add;

	for (add = 0; head != NULL; head = head->next)
		add = add + head->n;
	return (add);
}

