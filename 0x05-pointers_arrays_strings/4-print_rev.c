#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int rev;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (rev = len; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}
}
