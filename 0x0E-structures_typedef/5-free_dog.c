#include "dog.h"

/**
  * free_dog - Delete dog from memory
  * @d: dog struct
  *
  * Return: Nothing
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
