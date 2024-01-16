#include "holberton.h"
/**
* *_strncat - concatenates 2 strings
* @dest: the target string
* @src: what is being added
* @n: how much of src is being added to dest
* Return: returns the dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
