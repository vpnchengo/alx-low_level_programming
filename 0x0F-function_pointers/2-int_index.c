#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: int array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (!array || !cmp)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
