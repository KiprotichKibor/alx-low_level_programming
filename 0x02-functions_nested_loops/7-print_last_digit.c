#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @i: function parameter
 * Return: j
 *
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);

	return (0);
}
