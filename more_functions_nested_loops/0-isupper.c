#include "main.h"
/**
 * _isupper - Checks if the character is uppercase.
 *
 * @c: char.
 *
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	if ('@' < c && c < '[')
		return (1);

	else
		return (0);
}
