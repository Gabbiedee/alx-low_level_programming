#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase
 * @c: character being tested
 * Return: always zero
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
