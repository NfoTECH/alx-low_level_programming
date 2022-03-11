#include <stdio.h>

/**
 * main - Prints the alphabet at reverse
 *
 * Return: 0 (successful execution)
 **/
int main(void)
{
	char alphabets;

	for (alphabets = 'z'; alphabets >= 'a'; alphabets--)
	{
		putchar(alphabets);
	}

	putchar('\n');

	return (0);
}
