#include <stdio.h>
#include "main.h"


/**
 * _atoi- Converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from string
 */

int _atoi(char *s)
{
	int length, digit, number, i, f, d;

	length = 0;
	digit = 0;
	number = 0;
	i = 0;
	f = 0;
	d = 0;

	while (s[length] != '\0')
		length++;

	while (i < length && f == 0)
	{
		if (s[i] == '-')
			d++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (d % 2)
				digit = -digit;

			number = number * 10 + digit;
			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;

					f = 10;
		}

		i++;
	}

	if (f == 0)
	return (0);

	return (number);
}




/**
 * main- multiplies two numbers
 * @argc: number of commandline arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 *
 */

int main(int argc, char *argv[])
{
	int number1, number2, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	number1 = _atoi(argv[1]);
	number2 = _atoi(argv[2]);
	result = number1 * number2;

	printf("%d\n", result);

	return (0);
}
