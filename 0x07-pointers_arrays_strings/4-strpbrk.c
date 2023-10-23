#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - a function that searches a string for any set of bytes
 * @s: parameter 1
 * @accept: parameter 2
 * Return: pointer to byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;

	}
	return (NULL);
}
