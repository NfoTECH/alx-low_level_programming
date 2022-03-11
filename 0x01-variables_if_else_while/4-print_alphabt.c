#include <stdio.h>

/**
 * main - Execution starts here
 *
 * Return: return 0 showing successful execution
 **/
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
		{
			putchar(alphabets);
		}
	}

	putchar('\n');

	return (0);
}
