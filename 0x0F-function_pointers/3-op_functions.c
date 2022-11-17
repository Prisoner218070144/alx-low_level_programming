#include "3-calc.h"

/**
  * op_add - Sum of a and b
  * @a: first number
  * @b: second number
  *
  * Return: sum of two numbers
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - Difference of a and b
  * @a: first number
  * @b: second number
  *
  * Return: Difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - Product of a and b
  * @a: first number
  * @b: second number
  *
  * Return: Product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - Division of a by b
  * @a: first number
  * @b: second number
  *
  * Return: Division of a by b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - Remainder of the division of a by b
  * @a: first number
  * @b: second number
  *
  * Return: Remainder of the division of a by b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
