#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list
 * @head: a pointer to the start of the nodes
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		*head = NULL;
	}
}
