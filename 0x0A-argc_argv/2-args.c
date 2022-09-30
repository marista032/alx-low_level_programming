#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all arguments it recieves
 * @agrc: argument counts
 * @argv: array of pointers to argument string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
