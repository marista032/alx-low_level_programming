#include "main.h"

/**
 * times_table - print 9 times table, starting with 0
 */
void times_table(void)
{
int num, mult, prod;

for (num = 0; num <= 9; num++)
{
_putchar('0');

for (mult = 1; mult <= 9; mult++)
{
_putchar('.');

