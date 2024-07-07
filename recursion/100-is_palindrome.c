#include "main.h"
/**
 * is_pal -  returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer to a char.
 * @i: int.
 * @j: int.
 * Return: 1 or 0.
 */
int is_pal(char *s, int i, int j){
	if (i >= j)
		return (1);

	if (s[i] != s[j])
		return (0);

	return (is_pal(s, i + 1, j - 1));
}
/**
 * str_len - returns the lenght of string.
 * @s: pointer to a char.
 * @l: int.
 * Return: lenght of string.
 */
int str_len(char *s, int l)
{
	if (s[l] == '\0')
		return (l);

	return ((str_len(s, l+1)));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer to char.
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = str_len(s, 0);

	return (is_pal(s, 0, len - 1));
}
