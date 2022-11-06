#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: parameter to be evaluated
 *
 * Return: 1 if parameter is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
