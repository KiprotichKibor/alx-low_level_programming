#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: beginningof nodes
 * @str: string stored inthe nodes
 * Return: address of a new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	unsigned int i, count = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newNode->len = count;
	newNode->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (*head);
}
