#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints dog info
 * @d: id pointer to dog
 *
 * Return: nothing
 **/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d-> == NULL)
	{
		printf("Name: (nil)\n");
	}

	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	else
		printf("Owner: %s\n", d->owner);
}


