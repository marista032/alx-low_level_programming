#include "main.h"
#include <stdio.h>

/**
 * main - this program prints the number of arguments passed to it
 *
 * @argc: number of arguments
 * @argv: string of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
