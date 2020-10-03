#include"holberton.h"
/**
 * _islower - lowercase check
 * @c: character check
 * Return:  1 lowercase 0 uppercase
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
