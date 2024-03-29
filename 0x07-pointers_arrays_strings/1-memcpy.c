#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: where to copy into
 * @src: where to copy from
 * @n: number of bytes to copy
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
