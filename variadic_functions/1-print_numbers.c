#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 1; i < (int)n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL)
			printf("%s", separator);
	}

	printf("%d", va_arg(ap, int));

	va_end(ap);

	printf("\n");
}
