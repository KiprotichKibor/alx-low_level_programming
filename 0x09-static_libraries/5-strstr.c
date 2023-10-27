#include "main.h"
#include <stddef.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: substring to be located
 * @needle: string where substring should be located
 * Return: a pointer to the begginning of the substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
