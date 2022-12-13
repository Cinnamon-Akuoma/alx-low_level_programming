#include "main.h"

/**
 * _isalpha - this program checks whether a xtr
 * is from the English alphabet
 * @c: input parameter
 * Return: 1 for English xter
 * 0 if the chataracter is not Enlgish
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
