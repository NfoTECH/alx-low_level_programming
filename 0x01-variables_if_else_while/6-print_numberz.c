#include <stdio.h>

/**
 * main - Executes base 10 numbers
 *
 * Return: Return 0 as success
 **/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
