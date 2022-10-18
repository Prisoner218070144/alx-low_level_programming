#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char c;
	int num = 0;

	while (num <= 9)
	{
		for(c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		num++;
	}
}
