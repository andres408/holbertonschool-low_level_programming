#include "holberton.h"
/**
 * print_last_digit - display the last number
 * Return: 0 always success
 */
int print_last_digit(int c)
{
	int l = c % 10;
	if (l < 0)
	{
		_putchar (-l + '0');
		return (-l);
	}
	else
	{
		_putchar (l + '0');
	return (l);
	}
}
