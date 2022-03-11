#include <stdio.h>

/**
 * main - Execute base 10 no
 *
 * Return: return 0 as success
 **/
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
