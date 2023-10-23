#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: parameter 1
 * @accept: parameter 2
 * Return: bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; s[i] != accept[j] ; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);

}
