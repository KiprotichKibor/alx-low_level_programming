#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: head of the node
 * @str: string to be stored
 * Return: NULL or address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int i, count = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newNode->len = count;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
