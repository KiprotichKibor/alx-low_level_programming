#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the first node of the list
 * Return: number of nodes oin the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow != NULL)
	{
		fast = slow->next;
		if (fast == slow || fast == NULL)
		{
			printf("-> %d\n", slow->n);
			num_nodes++;
			return (num_nodes);
		}
		fast = fast->next;
		if (fast == slow || fast == NULL)
		{
			printf("-> %d\n", slow->n);
			num_nodes++;
			return (num_nodes);
		}
		printf("-> %d, ", slow->n);
		slow = slow->next;
		num_nodes++;
	}
	return (num_nodes);
}
