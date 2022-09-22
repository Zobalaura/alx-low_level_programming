#include "main.h"
/**
 * _strncat - concatenates two strings
 * Description -  a function that concatenates two strings.
 * @dest: a pointer to character data type
 * @src: a pointer to character data typ
 * @n: an integer data type
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, cksrc;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (cksrc = 0; src[cksrc] != 0; cksrc++)
	{
	}
	for (b = 0; b < n && b < cksrc; b++, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
