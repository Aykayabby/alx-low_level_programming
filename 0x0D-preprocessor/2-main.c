#include "main.h"
#include <stdio.h>

/**
 * main - write a program that prints the name of the file it was compied in
 * from, followed by a new line
 *
 * Return: always 0
 */

int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
