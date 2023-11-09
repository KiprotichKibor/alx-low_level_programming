#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * print_all - a function that prints anything
 * @format: parameter 2
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *arg, *sep = "";
	int i = 0;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					arg = va_arg(args, char *);
					if (!arg)
						arg = "(nil)";
					printf("%s%s", sep, arg);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);

}
