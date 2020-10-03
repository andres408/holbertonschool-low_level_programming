#include"holberton.h"
/**
 * print_sign - prints the sign of a number
 * @n: the sign of a number
 * Return: n>0 1, n<0 -1, n==0 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
