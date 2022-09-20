#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * Description - function that reverses a string
 * @s: character data type
 * Return: void
 */
void rev_string(char *s)
{
	int x = 0, y, z;
	char k;

	while (s[x] != '\0')
	{
		x++;
	}
	z = x - 1;
	for (y = 0; z >= 0 && y < z; z--, y++)
	{
		k = s[y];
		s[y] = s[z];
		s[z] = k;
	}
}
