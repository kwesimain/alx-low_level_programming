#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar(\n);
	return (0);
}
