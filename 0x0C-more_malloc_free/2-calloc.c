#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: parameter 1
 * @size: size of the string
 * Return: NULL or a pointer to a memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);
}
