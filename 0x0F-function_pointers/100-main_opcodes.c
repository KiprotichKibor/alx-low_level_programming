#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * print_opcodes - print opcodes for main
 * @c: parameter 1
 * @n: parameter 2
 * Return: void
 */
void print_opcodes(char *c, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", c[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, i);

	return (0);

}
