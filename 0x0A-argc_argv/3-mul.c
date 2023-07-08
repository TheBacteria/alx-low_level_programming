#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of 2 numbers
 *
 * @argc: number of commandline arguments
 * @argv: pointer to an array
 *
 * Return: 0
*/
int main(int argc, char **argv)
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
