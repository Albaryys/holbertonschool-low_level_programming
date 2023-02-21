/*
 * File: 2-print_alphabet_x10.c
 * Auth: Arnaud Tily
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void	print_alphabet_x10(void)
{
	int	i;
	char	a;

	a = 'a';
	i = 0;

	while (i++ <= 9)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		a = 'a';
	}
}
