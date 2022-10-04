#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @height: rows of the 2D array
 * @width: columns pf the 2D array
 *
 * Return: pointer to 2D array, otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);
	
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
