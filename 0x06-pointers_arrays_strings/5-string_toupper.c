#include "main.h"
/**
 * string_toupper - a function that converts letters to uppercase
 * @str: string characters
 * Return: uppercase characters of the string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
