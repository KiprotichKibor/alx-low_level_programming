#include "main.h"
/**
 * is_prime_number - a function that finds a prime number
 * @n: input number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_recursive(n, 2));
	}
}

/**
 * prime_recursive - a function that locates prime
 * @n: number to be checked
 * @i: parameter 2
 * Return: prime numbers
 */
int prime_recursive(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (prime_recursive(n, i + 1));
	}
}
