#include "main.h"

int checker_prime(int n, int div);
/**
 * is_prime_number - Checks if a number is a prime number
 *
 * @n: The number to be checked
 *
 *  Return: 1 if the number is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checker_prime(n, 2));
}

/**
 * checker_prime - Helper function to recursively check if a number is prime.
 *
 * @n: The number to be checked
 * @div: The divisor
 *
 * Return: 1 if the number is prime, 0 otherwise
*/
int checker_prime(int n, int div)
{
	if (n == div)
		return (1);
	if (n % div == 0)
		return (0);
	return (checker_prime(n, div + 1));
}
