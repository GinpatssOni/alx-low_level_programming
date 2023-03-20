#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - prints the sum of the two diagonals of a square matrix
  * of integers.
  * @a: the matrix [][] index
  * @size: the size of the matrix
  * Return: nothing
  */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
	d1 = d1 + *(a + (i * size) + i);
	d2 = d2 + *(a + ((i + 1) * size - (i + 1)));
	}
	printf("%d,%d\n", d1, d2);
}
