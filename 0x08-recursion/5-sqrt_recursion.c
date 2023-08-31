#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns  natural square root of  number
 * @n:  calculate the square root of a number
 *
 * Return:result square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses gets the natural
 *the  square root of number
 * @n: number to calculate the sqaure root of
 * @i:will do  iterator
 *
 * Return: results square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

