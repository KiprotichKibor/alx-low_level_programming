#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: the head of linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
