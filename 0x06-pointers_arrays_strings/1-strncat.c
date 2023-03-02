#include "main.h"
/**
  * _strncat - concatenates n bytes from src string to dest string.
  * @dest: destination string
  * @src: source string
  * @n: bytes from src string
  * Return: pointer to destination string
  */

char *_strncat(char *dest, char *src, int n)
{
	int destl = 0;
	int srcl = 0;

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
		dest[destl++] = *(src++);
		}
	}
	else
	{
		while (n)
		{
		dest[destl++] = *(src++);
		n--;
		}
	}
	return (dest);
}
