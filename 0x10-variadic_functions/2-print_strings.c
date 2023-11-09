#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: a pointer to a separator
 * @n: number of strings passed to the function
 * @...: optional parameter
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str;

	va_start(args, n);

	if (separator == NULL)
		exit(1);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
