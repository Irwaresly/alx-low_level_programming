#include <stdio.h>
#include<stdlib.h>
/**
 * main - prints lowercase letters
 *
 * Return: 0 success
 */
int main(void)
{

char c;

for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
putchar('\n');

return (0);
}

