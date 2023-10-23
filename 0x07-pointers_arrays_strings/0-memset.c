#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer memory location
 * @b: bytes to be filled
 * @n: number of bytes in s
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p;

	p = s;
	while (n > 0)
	{
		*p = b;
		p++;
		n--;
	}
	return (s);
}
