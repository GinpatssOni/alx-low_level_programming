#include "main.h"
/**
  * _memcpy - copy memoty area.
  * @dest: pointer to the first byte of destination memory
  * @src:  pointer to the first byte of source memory
  * @n: number of bytes to copy
  * Return: pointer to dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n > 0)
	{
	n--;
	*(dest + n) = *(src + n);
	}
	return (dest);
}
