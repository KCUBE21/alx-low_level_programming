#include <stdio.h>
#include "main.h"




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

	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	result = number1 * number2;

	printf("%d\n", result);

	return (0);
}
