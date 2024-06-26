#include "main.h"
/**
 * _isdigit - Checks for a digit.
 *
 * @c: is an int.
 *
 * Return: 1 or 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && '9' >= c)
		return (1);

	else
		return (0);
}
