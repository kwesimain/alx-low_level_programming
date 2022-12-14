#include "main.h"
/**
 *_islower - controls if a character is in lowercase
 * Return: returns 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
