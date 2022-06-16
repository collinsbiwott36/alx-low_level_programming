#include "main.h"

/**
 * string_toupper - changes all lowercase letters os a string to uppercase
 * @s: string to change
 *
 * Return: address of s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'Z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
