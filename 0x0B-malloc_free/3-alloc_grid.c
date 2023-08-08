#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: the width
 *
 * @height: the height
 *
 * Return: array of strings
 *
 */

int **alloc_grid(int width, int height)
{

int **grid;
int r = 0;
int c;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
while (r < height)
{
grid[r] = malloc(sizeof(int) * width);
if (grid[r] == NULL)
{
while (r > 0)
free(grid[--r]);
free(grid);
return (NULL);
}
c = 0;
while (c < width)
grid[r][c++] = 0;
r++;
}
return (grid);
}
