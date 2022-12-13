#include "main.h"

/**
 * _islower - this program checks
 * lower case
 * @c: input parameter
 * Return: 1 for lowercase, 0 if it's not lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
