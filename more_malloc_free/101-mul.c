#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
#include <string.h>

/**
*isNumeric - Checks the string if it is numeric.
*@str: String to be checked
*
*Return: 1 if the string is numeric,
*	0 is the string is not numeric.
*/
int isNumeric(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (*(str + i) < 48 || *(str + i) > 57)
			return (0);
		i++;
	}
	return (1);
}

/**
*multiply - Calculates the multiplication.
*@num1: First number
*@num2: Second number
*
*Return: void.
*/
int multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int resultLen, i, j, mul, sum;
	int *result;

	resultLen = len1 + len2;

	result = calloc(resultLen, sizeof(int));
	if (result == NULL)
	{
		printf("Memory allocation failed\n");
		return (98);
	}

	for (i = len1 - 1; i >= 0; i--)
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = mul + result[i + j + 1];
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	i = 0;
	while (i < resultLen - 1 && result[i] == 0)
		i++;
	for (; i < resultLen; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);
	return (0);
}

/**
*main - Checks two arguments if they are numbers and prints multiplication.
*@argc: Number of arguments
*@argv: Pointer to the array of arguments
*
*Return: 0,
*	98 if fails.
*/
int main(int argc, char **argv)
{
	if (argc != 3 || !isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	multiply(argv[1], argv[2]);

	return (0);
}
