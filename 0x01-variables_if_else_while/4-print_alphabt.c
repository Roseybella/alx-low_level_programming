#include <stdio.h>
/**
*main- print the alphabet in lowercase,
*followed by a new line, except q and e
*Return: Anyways 0 (Sucess)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
	}
	c++;
	putchar('\n');
	return (0);
}
