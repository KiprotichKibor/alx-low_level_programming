#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the first node of the list
 * Return: number of nodes oin the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t node_count = 0;

	if (head == NULL)
		exit(98);
	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;

		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			printf("[%p]\n", (void *)slow);
			exit(98);
		}
	}
	return (node_count);
}
