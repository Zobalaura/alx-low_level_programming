#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * Description - a function
 * @str: character data type
 * Return: void
 */
void puts_half(char *str)
{
	int x = 0, n;

	while (str[x] != '\0')
		x++;
	if (x + 1 % 2 != '\0')
		n = (x - 1) / 2;
	else
		n = (x / 2);
	n++;
	for (x = n; str[x] != '\0'; x++)
	_putchar(str[x]);
	_putchar('\n');
}
