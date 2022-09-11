#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints single digits from 0 to 9
 * only use putchar
 * only use putchar twice
 *
 * Return: zero on success
 */
int main(void)
{

	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	putchar('\n');

	return (0);
}
