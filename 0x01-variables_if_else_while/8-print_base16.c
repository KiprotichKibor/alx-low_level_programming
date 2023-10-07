#include <stdio.h>
/**
 * main - a program that prints base 16 numbers
 *
 * Return: always return 0
 *
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 16 ; i++)
		if (i < 10)
			putchar(i + '0');
		else
			putchar('a' + (i - 10));
	putchar('\n');
	return (0);

}
