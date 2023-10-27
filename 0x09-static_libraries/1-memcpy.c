#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: destination of the bytes
 * @src: source of the bytes
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *p = dest;
	char *s = src;

	for (i = 0 ; i < n ; i++)
	{
		p[i] = s[i];
	}
	return (dest);
}
