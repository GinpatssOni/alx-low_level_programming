#include "main.h"
/**
  * _memset - fill memory with given byte.
  * @s: pointer to the first byte of memory
  * @b: byte value to fill with
  * @n: number of bytes to fill
  * Return: pointer to s the first byte
  */

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
	n--;
	*(s + n) = b;
	}
	return s;
}
