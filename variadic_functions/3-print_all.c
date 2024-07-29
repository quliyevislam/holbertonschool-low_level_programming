#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - Prints anything.
 *
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *ptr, *sep = ", ";

	va_start(ap, format);

	while (format && format[i])
	{
		if (!format[i + 1])
			sep = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), sep);
			break;
			case 'i':
				printf("%d%s", va_arg(ap, int), sep);
			break;
			case 'f':
				printf("%f%s", va_arg(ap, double), sep);
			break;
			case 's':
				ptr = va_arg(ap, char*);
				if (ptr == NULL)
					ptr = "(nil)";
				printf("%s%s", ptr, sep);
			break;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
