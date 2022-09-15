#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdlib.h>
#include "main.h"

#endif
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	r = abs(r);
	_putchar(r + '0');
	return (r);
}
