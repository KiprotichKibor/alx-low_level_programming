#include "main.h"
/**
 * _atoi - a function that convert a string to an integer
 * @s: string to be coverted to an integer 
 * Return: converted string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t')
		i++;
	if (s[i] == '_')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (2147483647 - (s[i] - '0')) / 10)
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
