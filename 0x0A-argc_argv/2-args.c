#include <stdio.h>

/**
 * main - prints a program that multiplies two numbers
 * @agrc: number of arguments
 * @argv: strings of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		prints("%s\n", argv[i]);
	return (0);
}
