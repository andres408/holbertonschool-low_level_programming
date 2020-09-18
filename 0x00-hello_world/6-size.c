#include<stdio.h>
/**
* main - Prints size of some data types
* description: Prints the sizes of a char, int, long int, and float
* Return: 0 always
*/
int main(void)
{
char charType;
int intType;
long int longintType;
long long int longlongType;
float floatType;
printf("Size of a char: %d byte(s)\n", sizeof(charType));
printf("Size of a an int: %d byte(s)\n", sizeof(intType));
printf("Size of a long int: %d byte(s)\n", sizeof(longintType));
printf("Size of a long long int: %d byte(s)\n", sizeof(longlongType));
printf("Size of a float: %d byte(s)\n", sizeof(floatType));

return (0);
}
