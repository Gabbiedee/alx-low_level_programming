#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints single digits from 0 to 9
 *
 * Return: zero on success
 *
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	printf("\n");

	return (0);
}
