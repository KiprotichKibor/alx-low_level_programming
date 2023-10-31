#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: a string to be allocated some memory
 * Return: NULL or a pointer to the duplicate string
 */
char *_strdup(char *str)
{
	char *dup;
	int i, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;

	dup = malloc((i + 1) * (sizeof(char)));

	if (dup == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		dup[r] = str[r];
	return (dup);

}
