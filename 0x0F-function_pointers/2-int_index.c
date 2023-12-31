#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: a pointer to an array to be searched
 * @size: size of the array
 * @cmp: a pointer to a function
 * Return: index of the first element of a non NULL int returned by cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

