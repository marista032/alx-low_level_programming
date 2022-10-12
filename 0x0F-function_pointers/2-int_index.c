#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array
 * @size: size of the array
 * @cmp: pointer to the function to be used
 * to compare values
 * Return: index of the first eement for which the cmp
 * function does not return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}

		if (i < size)
			return (i);
	}
	return (-1);
}
