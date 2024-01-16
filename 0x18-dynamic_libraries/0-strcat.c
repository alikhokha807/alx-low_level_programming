#include "holberton.h"
/**
* *_strcat - concatenates 2 strings
* @dest: the target string
* @src: what is being added
* Return: returns the dest
*/
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x + y] = src[y];
	}
	dest[x + y] = '\0';
	return (dest);
}
