#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - Prints stringss followed by a new line.
 * @separator: String to be printed between strings.
 * @n: Number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	char *ptr;

	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		ptr = va_arg(ap, char*);

	if (ptr == NULL)
		ptr = "(nil)";

	printf("%s", ptr);

	if (i + 1 >= (int)n)
		break;

	if (separator != NULL)
		printf("%s", separator);
	}

	va_end(ap);

	printf("\n");
}
