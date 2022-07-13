#include "main.h"
#include <stdio.h>

/**
 * cap_string -> capitalization function
 * @x: string param
 * Return: capitalized version of the string
 */

char *cap_string(char *x)
{
	int len = 13;
	int a = 0, i;
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (x[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || x[a - 1] == spc[i]) && (x[a] >= 97 && x[a] <= 122))
				x[a] = x[a] - 32;
				i++;
		}
		 a++;
	}

	return (x);
}
