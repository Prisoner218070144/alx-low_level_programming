#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * Return: the value of the last digit
 */

int print_last_digit(int a)
{
	int lastNum;

	lastNum = a % 10;

	if (lastNum < 0)
	{
		lastNum = lastNum * -1;
	}

	_putchar(lastNum + '0');

	return (lastNum);
}
