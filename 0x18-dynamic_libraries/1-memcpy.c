#include "holberton.h"
/**
 * _memcpy - copies from the src to the dest
 * @dest: the dest
 * @src: the src
 * @n: the amount to be copied
 * Return: the altered dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
