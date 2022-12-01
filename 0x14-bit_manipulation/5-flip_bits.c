#include "main.h"

/**
  * flip_bits - Finds the corresponding bits
  * @n: The number to modify
  * @m: The number to modify
  *
  * Return: Corresponding bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;

		mask >>= 1;
	}

	return (count);
}
