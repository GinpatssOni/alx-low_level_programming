#include "main.h"
/**
  * _strcat - concatenates src string to dest string.
  * @dest: destination string
  * @src: source string
  * Return: pointer to destination string
  */

char *_strcat(char *dest, char *src)
{
	int destl = 0;

	while (dest[destl] != '\0')
	{
	destl++;
	}

	while ((*(src)) != '\0')
	{
	dest[destl++] = *(src++);
	}

	return (dest);
}
