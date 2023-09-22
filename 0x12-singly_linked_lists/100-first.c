
#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - displays sentence b4  main
 * function implemetations
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


