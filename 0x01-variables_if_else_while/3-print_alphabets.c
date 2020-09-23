#include<stdio.h>
/**
* main - Alphabet in upper and lower case
* Description: Using puthcar function
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 97 ; i <= 122 ; i++)

putchar (i);
for (i = 65 ; i <= 90 ; i++)
putchar (i);
putchar ('\n');
return (0);
}
