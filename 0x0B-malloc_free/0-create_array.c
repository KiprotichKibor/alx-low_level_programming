#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: number of characters in the array
 * @c: array name
 * Return: Pointer to an array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
