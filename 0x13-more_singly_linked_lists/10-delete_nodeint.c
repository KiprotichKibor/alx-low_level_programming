#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: a pointer to a pointer of the first node of the list
 * @index: the index of the node that should ne deleted
 * Return: 1 if success or -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	prev = *head;
	temp = prev->next;
	for (i = 0; i < index - 1 && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	prev->next = temp->next;
	free(temp);

	return (1);
}
