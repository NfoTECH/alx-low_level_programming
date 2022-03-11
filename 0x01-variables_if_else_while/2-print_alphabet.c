#include <stdio.h>

/**
*main - Start of execution
*Return: return 0 
*/

int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');

	return (0);
}
