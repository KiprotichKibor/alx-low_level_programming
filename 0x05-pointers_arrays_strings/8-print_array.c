#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints elements in a array
 * @a: variable 1
 * @n: variable 2
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
