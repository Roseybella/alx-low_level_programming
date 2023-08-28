#include "main.h"

/**
* _strcat - A function that concatenates two strings.
* @dest: The resulting string.
* @src: The source string.
* Return: A pointer to the resulting string dest.
*/

char *_strcat(char *dest, char *src)
{
	char *k = dest;

	/* Move the pointer to the end of the resulting string */
	while (*k)
	k++;

	/* Append the characters src to dest */
	while (*src)
	{
	*k = *src;
	src++;
	k++;
	}
	/* Add a null terminator at the end */
	*k = '\0';

	return (dest);
}
