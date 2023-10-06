#include <stdio.h>
/**
 * main - a program that print alphabets
 *
 * Return: always return 0
 *
 */

int main(void)

{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);

}
