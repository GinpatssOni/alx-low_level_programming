#include "main.h"
/**
  * _strstr - function that locates a substring.
  * @haystack: string to search in.
  * @needle: substring to search for.
  * Return: firs occurence pointer or NULL if substring not found.
  */

char *_strstr(char *haystack, char *needle)
{
	int indx = 0;
	char flg = 0;

	while (*haystack)
	{
	while (*(needle + indx))
	{
	if (*(haystack + indx) == *(needle + indx))
	flg++;
	indx++;
	}
	if (flg == indx)
	return (haystack);
	indx = 0;
	flg = 0;
	haystack++;
	}
	return (0x00);
}
