#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int 1;

	1 = 0;

	while (*(s + 1) != '\0')
		1++;
	1--;
	for (; 1 >= 0; 1--)
		_putchar(*(s + 1));
	_putchar('\n');
}