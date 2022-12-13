#include "main.h"

/**
 * _puts - display a string to stdout
 * @a: The string to be displayed
 * _putchar prints a new line
 */

void _puts(char *a)
{
	while (*a)
		_putchar(*a++);

	_putchar('\n');
}
