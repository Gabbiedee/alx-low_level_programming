#include "main.h"

/**
 * print_alphabet - a function that prints letters a-z in lowercase
 *
 * Return: 0 always at success
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
