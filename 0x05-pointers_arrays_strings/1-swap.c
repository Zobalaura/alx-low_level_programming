#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the value of two integers
 * description - function
 * @a: int type
 * @b: int type
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
