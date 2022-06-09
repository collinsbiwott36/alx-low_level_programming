#include <stdio.h>

/**
 * main - prints the number from 1 to 100,
 *	if number is divisible by 3 print fizz
 *	if number is divisible bt 5 print buzz
 *	if number is divisible by both 5 and 3 print fizzbuzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");

		else if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else
			printf("%d", i);

		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
