#include <stdio.h>
/**
 * main - a program that print numbers
 *
 * Return: return is always 0
 *
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
