#include"holberton.h"
/**
 * _abs - compute the absolute value of an integer
 * Return: absolute value
 * @r: absolute value of an integer
 */
int _abs(int r)
{
	if (r < 0)
		return (-r);
	return (r);
}
