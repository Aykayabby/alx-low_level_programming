#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
