#include "main.h"

/**
 * _strlen_recursion - Returna the length of a string
 * @s: The string to be measured.
 *
 * Retuurn: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len +=_strlen_recursions(s + 1);
	}
	return (len);
}
