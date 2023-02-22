#include "main.h"
/**
  * _islower - checks for lowercase character
  * @c: The character to check
  * Return: return 1 if lower case 0 otherwise
  */

int _islower(int c)
{
	return ((c <= 122 && c >= 97) ? 1 : 0);
}
