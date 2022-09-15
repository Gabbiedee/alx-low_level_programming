#include "main.h"
/**
 * print_alphabet_x10 - Check holberton
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char n;
	int v;

	for (v = 0; v < 10; v++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}
