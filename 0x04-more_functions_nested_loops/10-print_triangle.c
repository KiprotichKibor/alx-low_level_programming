#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: prototype parameter
 * Return: 0
 */
void print_triangle(int size)
{
	int rows, col;

	if (size > 0)
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (col = size - rows; col > 0; col--)
			{
				_putchar(' ');
			}
			for (col = 0; col < rows; col++)
			{
				_putchar('#');
			}
			if (rows == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
