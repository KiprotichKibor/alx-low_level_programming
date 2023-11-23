#include "main.h"
/**
 * get_bit - retunrs the value of a bit a a given index
 * @n: number to be converted to binary
 * @index: index
 * Return: value of bit at index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	n = n >> index;
	return (n & 1);
}
