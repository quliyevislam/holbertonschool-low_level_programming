#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * 
 * Return: A pointer to the result if successful, or 0 if it fails.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0, sum;
    int i = len1 - 1, j = len2 - 1, k = size_r - 2;

    
    if (size_r <= len1 + 1 || size_r <= len2 + 1)
        return 0;

    r[size_r - 1] = '\0';
    
    while (i >= 0 || j >= 0 || carry)
    {
        if (k < 0)
            return 0;

        sum = carry;
        if (i >= 0)
            sum += n1[i--] - '0';
        if (j >= 0)
            sum += n2[j--] - '0';

        carry = sum / 10;
        r[k--] = (sum % 10) + '0';
    }

    k++;

    if (r[k] == '0')
        k++;

    return r + k;
}
