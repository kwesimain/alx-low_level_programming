#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
