#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to starrt of matrix
 * @size: width of matrix column
 *
 * return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; l < size; l++)
	{
		p = (l * size) + l;
		l += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (siize - l = j);
		r += *(a + p);
	}
	printf("%l, %l\n', l, r);
}
