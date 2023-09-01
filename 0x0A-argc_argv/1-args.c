#include <stdio.h>
#include "main.h"

/**
 * main -This  print  number of the  arguments that is  passed to program
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

