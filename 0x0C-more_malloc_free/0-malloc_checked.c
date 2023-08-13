#include "main.h"

/**
 * *malloc_checked- allocate memory
 * @b: insigned
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
		exit(98);
	return (pt);
}
