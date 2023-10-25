#include "main.h"
/**
 * _sqrt_recursion - a function that returns square root of a number
 * @n: a number to which its square root will be calculated
 * Return: a square root of n
 */
int _sqrt_recursion(int n)
{

	if (n < 1)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}

/**
 * _sqrt - a function that calculates natural square root
 * @n: number used to calculate the square root
 * @i: iterate number
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
