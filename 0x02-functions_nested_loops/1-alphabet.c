#include "main.h"
/**
 * print_alphabet -  prints alphabet
 * Return: none
 */
void print_alphabet(void)
{
	int letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar (letter);
	}
	_putchar (10);
}
