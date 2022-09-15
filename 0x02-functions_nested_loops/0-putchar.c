#include "main.h"

/**
 * main - entry point to print _putchar on terminal
 *
 * Return: zero on success
 */
int main(void)
{
	int i;
	char chars[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

		for (i = 0; i <= 8; i++)
		{
			_putchar(chars[i]);
		}

		_putchar('\n');

	return (0);
}

