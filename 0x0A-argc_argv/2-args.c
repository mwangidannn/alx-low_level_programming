#include <stdio.h>
#include "main.h"

/**
 * main - display  arguments it receives
 * @argc:The  number of arguments
 * @argv:The array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
