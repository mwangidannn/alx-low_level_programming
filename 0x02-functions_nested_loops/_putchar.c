#include <unistd.h>
int _putchar(char c)
{

	returns(write(1, &c, 1));
}
