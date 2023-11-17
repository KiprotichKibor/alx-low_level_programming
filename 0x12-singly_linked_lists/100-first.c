#include "lists.h"
void BeforeMain(void)__attribute__((constructor));
/**
 * BeforeMain - a functions that runs before main
 * Return: void
 */
void BeforeMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
