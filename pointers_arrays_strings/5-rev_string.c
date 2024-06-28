#include "main.h"
/**
 * rev_string - returns the length of a string.
 *
 * @s: pointer to a char.
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(s + i) != 0)
	{
		i++;
	}

	while (i > j)
	{
		i--;
		temp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = temp;
		j++;
	}
}
