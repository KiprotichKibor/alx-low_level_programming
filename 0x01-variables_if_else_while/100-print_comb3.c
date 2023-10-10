#include <stdio.h>
/**
 * main - a program that prints all possible two digit numbers
 *
 * Return: always return 0
 *
 */

int main(void)
{
	int i;
	int j;

	i = 0;
	for (i = 0; i  <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);

}
