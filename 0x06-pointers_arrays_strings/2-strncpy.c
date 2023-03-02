#include "main.h"
/**
  * _strncpy - copy n length src string to dest string.
  * @dest: destination string
  * @src: source string
  * @n: length to copy
  * Return: pointer to destination string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int destl = 0;
	int srcl = 0;
	char *rtrn = dest;

	while (dest[destl] != '\0')
	{
	destl++;
	}

	while (src[srcl] != '\0')
	{
	srcl++;
	}

	if (srcl < n)
	{
	while ((*(src)) != '\0')
	{
	*(dest++) = *(src++);
	}
	while (srcl < n)
	{
	*(dest++) = '\0';
	srcl++;
	}
	}
	else
	{
	while (n)
	{
	*(dest++) = *(src++);
	n--;
	}
	}
	return (rtrn);
}
