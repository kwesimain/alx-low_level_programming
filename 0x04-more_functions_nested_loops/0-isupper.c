#include "main.h"
/**
 * _isupper - function that verifies if a  character is uppercase or not
 * @c: argument
 * Return: returns 1 if uppercase , 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
