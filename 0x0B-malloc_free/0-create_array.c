#include <stdlib.h>
#include "main.h"

/**
 * Create_array - creates an array of chars, and
 * Initializes it with a specific char
 * @size: size of the array
 * @c: character ti insert
 * Return: NULL if size is zero or if it fail
 * Pointer to array if everything is normal
 */

char *create_array(unsigned int size, char c)

{
	char *array;

	unsigned int index;

	if (size == 0)
	{
		Return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (arr ==NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	(
	 	arr[1] = c;
	}

	return (arr);
}
