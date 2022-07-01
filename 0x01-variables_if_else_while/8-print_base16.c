#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char low;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar(10);
	return (0);
}
