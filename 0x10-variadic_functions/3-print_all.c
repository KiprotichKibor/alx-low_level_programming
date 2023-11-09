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
	const char *formatPtr;
	void *arg;

	va_start(args, format);
	formatPtr = format;
	while (formatPtr != '\0')
	{
		switch (formatptr)
		{
			case 'c':
				arg = va_arg(args, char);
				printf("%c", (char)arg);
				break;
			case 'i':
				arg = va_arg(args, int);
				printf("%d", (int)arg);
				break;
			case 'f':
				arg = va_arg(args, float);
				printf("%f", (float)arg);
				break;
			case 's':
				arg = va_arg(args, char *);
				if (arg == NULL)
					printf("(nil)");
				else
					printf("%s", (char *)arg);
				break;
			default:
				break;
		}
		formatPtr++;
	}
	va_end(args);
	printf("\n");
}
