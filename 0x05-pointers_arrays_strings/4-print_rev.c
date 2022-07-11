#include "main.h"
#include <stdio.h>

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	for (x -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
