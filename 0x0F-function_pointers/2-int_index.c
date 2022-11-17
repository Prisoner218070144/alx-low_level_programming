#include "function_pointers.h"

/**
  * int_index - Searches for an integer
  * @array: pointer to an array of integers
  * @size: size of the array
  * @cmp: a pointer to a function
  *
  * Return: if no element matches, -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
