#include "main.h"
/**
 * print_array - print n element of array
 * @a: array
 * @n: number of elements
 * Return: none
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n ; c++)
	{
		if (c != n - 1)
			printf("%d, ", a[c]);
		else
			printf("%d", a[c]);

	}
	printf("\n");
}
