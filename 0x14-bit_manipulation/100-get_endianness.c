#include "main.h"
/**
 * get_endianness - hecks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int test_value = 1;

	unsigned char *ptr = (unsigned char *)&test_value;

	return ((*ptr == 1) ? 1 : 0);
}
