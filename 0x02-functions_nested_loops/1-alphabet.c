#include"holberton.h"
/**
 * print_alphabet - display alphabet in lowercase
 * Return: 0 always success
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
		_putchar(a);
	_putchar('\n');
}
