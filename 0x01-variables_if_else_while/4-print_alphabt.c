#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints alphabet
 *
 * Description: Prints the alphabet in lower case
 *
 * Skip q and e
 * Can only use putchar
 *
 * Return: zero for success
 *
 */
int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

		putchar('\n');

		return (0);
}

