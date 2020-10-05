#include"holberton.h"
/**
 * print_rev - display string reverse
 * @s: string pointer
 */

void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;


	for (c--; s[c] >= 0; c--)

		_putchar(*(s + c));
	_putchar('\n');
}
