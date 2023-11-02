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
	size_t s1Len = 0;
	size_t s2Len = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1Len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2Len++;
	ptr = malloc(sizeof(char) * (s1Len + n) + 1);
	if (ptr == NULL)
		return (NULL);
	if (n >= s2Len)
	{
		for (i = 0; i < n; i++)
		{
			ptr[i] = s1[i];
		}
		for (i = 0; i < n; i++)
		{
			ptr[s1Len + i] = s2[i];
		}
		ptr[s1Len + n] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i = 0; i < n; i++)
			ptr[s1Len + i] = s2[i];
		ptr[s1Len + i] = '\0';
	}

	return (ptr);
}
