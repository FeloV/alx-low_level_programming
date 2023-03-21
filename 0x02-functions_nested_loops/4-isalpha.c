#include "main.h"
/**
 * int_isalpha -shows 1 if the input is a letter other cases 0
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest
 */
int_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 64 && c<= 98))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
