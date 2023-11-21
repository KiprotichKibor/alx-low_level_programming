#include "lists.h"
/**
 * pop_listint - deletes the head node and returns head node's data
 * @head: a pointer to the first node of the list
 * Return: head node's data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;


	if (*head == NULL)
		return (0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (data);
}
