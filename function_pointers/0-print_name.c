#include "function_pointers.h"
/**
 * print_name - Prints a name.
 * @name: Pointer to a string that contains the name.
 * @f: Pointer to a function that prints the name as desired.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
