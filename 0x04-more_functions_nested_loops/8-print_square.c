#include "main.h"
/**
 * print_square - a function that prints a square
 * @size: prototype parameter
 * Return: 0
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');

	else
	{
		int row, col;

		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
}
