#include "main.h"

/**
 * _strpbrk - return to first char
 * @s: string to find substring
 * @accept: substring to find match
 * Return: pointer to first matching char
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	for (j = 0; accept[j] != '\0'; j++)
		if (s[i] == accept[j])
			goto exit;
exit: return (s[i] != '\0' ? s + i : '\0');
}
