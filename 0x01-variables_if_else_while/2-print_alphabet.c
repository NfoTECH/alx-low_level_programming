#include <stdio.h>

/**
 * main - Execution starts here
 *
 * Return: Always (Success)
 **/
int main(void)
{
		char alphabets;

		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
			putchar(alphabets);

		putchar('\n');
		return (0);
}
