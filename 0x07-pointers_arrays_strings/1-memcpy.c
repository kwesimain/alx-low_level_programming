#include "main.h"
/**
 * _memcpy - The _memcpy() function copies n bytes
 * from memory area src to memory area dest
 * @dest:argument
 * @src:argument
 * @n: argument
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
