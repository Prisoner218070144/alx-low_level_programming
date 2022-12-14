#include "main.h"

/**
  * malloc_checked - Allocates memory
  * @b: the size to allocate
  *
  * Return: pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
