#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - program antry point
  *
  * Return: Always Return 0
  */

int main(void)
{
	char c;

	c = 97;
	while (c < 123)
	{
		if (c == 101 || c == 113)
		{
		c++;
		continue;
		}
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
