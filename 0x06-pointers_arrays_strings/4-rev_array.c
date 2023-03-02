#include "main.h"
/**
  * reverse_array - reverse array of n number of integers
  * @a: array to reverse
  * @n: number of items in a
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int temp;
	int *a2 = a + (n - 1);

	while (a < a2)
	{
	temp = *(a2);
	*(a2--) = *(a);
	*(a++) = temp;
	}
}
