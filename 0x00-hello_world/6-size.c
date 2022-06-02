#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long L;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsinged long)sizeof(c));
	printf("size of a int: %lu byte(s)\n", (unsinged long)sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsinged long)sizeof(l));
	printf("size of a long long: %lu byte(s)\n", (unsinged long)sizeof(L));
	printf("size of a float: %lu byte(s)\n", (unsinged long)sizeof(f));
	return (0);
}
