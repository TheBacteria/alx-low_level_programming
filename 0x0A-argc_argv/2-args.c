#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of commandline arguments
 * @argv: pointer to an array
 *
 * Return: 0
*/
int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
