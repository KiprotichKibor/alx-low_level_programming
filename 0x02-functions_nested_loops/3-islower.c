#include "main.h"

/**
 * _islower - a fuction that chacks for lowercase character
 *@c: parameter to be checked
 * Return: returns 1 if c is lowercase otherwise returns 0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
