#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - prints value of x power of y
 * @x: parameter one
 * @y: parameter two
 *
 * Return: result 
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
