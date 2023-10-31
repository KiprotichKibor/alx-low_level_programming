#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: 2d parameter 1
 * @height: 2d parameter 2
 * Return: NULL or a pointer to array of integers
 */
int **alloc_grid(int width, int height)
{
	int **board;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	board = malloc(sizeof(int *) * height);
	if (board == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		board[x] = malloc(sizeof(int) * width);
		if (board[x] == NULL)
		{
			for (; x >= 0; x--)
				free(board[x]);
			free(board);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			board[x][y] = 0;
	}
	return (board);
}
