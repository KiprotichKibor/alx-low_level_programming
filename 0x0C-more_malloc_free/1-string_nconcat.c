#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: A pointer to the newly allocated string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t s1Len;
	size_t s2Len;
	size_t totalL;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	s1Len = strlen(s1);

	totalL = s1Len + n + 1;

	ptr = malloc(totalL);
	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, s1);
	s2Len = strlen(s2);
	if (n >= s2Len)
	{
		strcpy(ptr + s1Len, s2);
	}
	else
	{
		memcpy(ptr + s1Len, s2, n);
	}
	return (ptr);

}
