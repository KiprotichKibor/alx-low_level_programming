#include "main.h"
#include <string.h>
/**
 * _strncat - a function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes in source string
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = src[i];
		src++;

	}
	dest[len + i] = '\0';
	return (dest);
}
