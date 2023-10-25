#include "main.h"
/**
 * _pow_recursion - a function that returns x raised to power of y
 * @x: base number
 * @y: number used to raise x
 * Return: -1 or value of x raised y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
