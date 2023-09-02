#include "main.h"

/**
* _strncat - A function that concatenates two strings,
* using at most n bytes from src.
* @dest: The resulting string.
* @src: The source string.
* @n: The maximum number of bytes from src to be appended.
* Return: A pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	char *k_dest = dest;
	char *k_src = src;

	/* Move the resulting pointer to the end of dest */
	while (*k_dest)
	k_dest++;

	/* Copy at most n bytes from src to dest */
	while (*k_src && n > 0)
	{
	*k_dest = *k_src;
	k_dest++;
	k_src++;
	n--;
	}

	/* Add a null terminator at the end */
	*k_dest = '\0';

	return (dest);
}
