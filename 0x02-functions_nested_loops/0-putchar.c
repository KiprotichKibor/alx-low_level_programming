#include <stdio.h>

/**
 * main - a program that prints _putchar
 *
 * Return: return is always 0
 *
 */

int main(void)
{


	char i[] = " _putchar";
	int j = 0;

	while (i[j] != '\0')
	{
		putchar(i[j]);
		j++;
	}

	putchar('\n');

	return (0);


}
