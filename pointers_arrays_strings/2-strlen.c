/*
 * File: 2-strlen.c
 * Auth: Arnaud Tily
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 */
int _strlen(char *s)
{
	int	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
