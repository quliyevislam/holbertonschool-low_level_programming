#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the appropriate function
 * to perform the operation based on the operator.
 * @s: A string containing the operator.
 * Return: a function pointer to the appropriate operation function
 * if a match is found, or `NULL` if the operator is not recognized.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL},
	};

	int i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
