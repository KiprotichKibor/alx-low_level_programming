#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: parameter
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
