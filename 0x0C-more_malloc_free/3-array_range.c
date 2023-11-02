#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: parameter 1
 * @max: parameter 2
 * Return: NULL or a pointer to a memory
 */
int *array_range(int min, int max)
{
	int num_elements;
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	num_elements = max - min + 1;
	ptr = malloc(sizeof(int) * num_elements);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < num_elements; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
