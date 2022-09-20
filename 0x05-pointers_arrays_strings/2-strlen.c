#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * Description - string
 * @s: string character
 * Return: void
 */
int _strlen(char *s)
{
	int y = 0;

	for (; *s++;)
		y++;
	return (y);
}
