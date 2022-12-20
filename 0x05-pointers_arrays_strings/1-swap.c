#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: first int
 * @b: second int
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
