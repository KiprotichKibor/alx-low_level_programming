#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
