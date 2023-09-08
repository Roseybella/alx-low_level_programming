#include <stdlib.>
/**
*malloc_checked - allocates memory using malloc.
*@b: size of memory to be allocated.
*
* Return: pointer to allocate memory.
*/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == Null)
		exist(98);
	return (p);
}
