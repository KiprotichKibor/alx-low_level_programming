#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size parameter
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
	free(ptr);
}
