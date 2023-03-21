#include "main.h"

/**
 * print_sign - determines the number greater, equal, less than zero
 *
 * @n: input number as an integer
 *
 * Return: 1 if greater than 0. 0 if 0. -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

