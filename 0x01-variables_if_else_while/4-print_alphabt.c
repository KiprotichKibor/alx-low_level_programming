#include <stdio.h>
/**
 * main - prints alphabet except q and e
 *
 * Return: always returns 0
 *
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
