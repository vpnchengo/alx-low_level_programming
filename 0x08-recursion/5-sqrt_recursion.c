#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to determine its sqrt
 * Return: -1 or result of sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (check_sqrt_recursion(1, n));
}

/**
 * check_sqrt_recursion - check squareroot of integer
 * @i: integer
 * @j: integer
 * Return: integer sqrt
 */
int check_sqrt_recursion(int i, int j)
{
	if (i * i == j)
		return (i);
	return (check_sqrt_recursion(i + 1, j));
}
