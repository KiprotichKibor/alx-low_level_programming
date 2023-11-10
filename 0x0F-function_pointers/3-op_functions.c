#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - returns the sum of a and b
 * @a: integer 1
 * @b: integer 2
 * Return: a + b result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the value of a - b
 * @a: int 1
 * @b int 2
 * Return: result of substraction
 */
int op_sub(int a, int b)
{
	return (a - b); 
}

/**
 * op_mul - returns value of a * b
 * @a: int 1
 * @b: int 2
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of a / b
 * @a: int 1
 * @b: int 2
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of a / b
 * @a: int 1
 * @b: int 2
 * Return: the result of modulo
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

