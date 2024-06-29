#include "mian.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: pointer to a char.
 * Return: r.
 */
char *string_toupper(char *s)
{
	char *r = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (r);
}
