#include "main.h"
/**
 * reverse_array - a fucntion that reverses the content of an array
 * @a: array of integers
 * @n: number of elements in the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = n - 1 ; i >= n / 2 ; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}

}
