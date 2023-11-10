#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int numberOfBytes;
	unsigned char *mainAddress;
	unsigned char *main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numberOfBytes = atoi(argv[1]);
	if (numberOfBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	mainAddress = main;
	for (i = 0; i < numberOfBytes; i++)
	{
		printf("%02x ", mainAddress[i]);
	}
	printf("\n");

	return (0);

}
