#include "main.h"

/**
 * string_toupper - changes all lowercase letter to uppercase.
 * @n: string to change
 *
 * Return: address of n
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (*(n + i))
	{
		if (*(n + i) >= 'a' && *(n + i) <= 'z')
		    *(n + i) -= 'a' - 'A';
		i++;
	}
	return (n);
}
