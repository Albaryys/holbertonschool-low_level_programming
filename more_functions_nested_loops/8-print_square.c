/*
 * File: 8-print_square.c
 * Auth: Arnaud Tily
 */

#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int h, l;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (l = 0; l < size; l++)
				_putchar('#');

			if (h == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
