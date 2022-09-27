#include "main.h"

/**
 * _strpbrk - searches a string for any os a set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */
char *strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; accept s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
