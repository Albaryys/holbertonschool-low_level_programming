/*
 * File: 7-puts_half.c
 * Auth: Arnaud Tily
 */

#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int	lenght = 0, i;

	while (str[lenght])
		lenght++;

	for (i = (lenght + 1) / 2; i < lenght; i++)
		_putchar(str[i]);

	_putchar('\n');
}
