#include <stdio.h>
#include <unistd.h>

/**
 * main - print quote
 *
 * Description: prints Dora's quote
 * Return: Always 1 (Success)
 */

int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
