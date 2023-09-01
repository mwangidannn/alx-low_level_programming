#include "main.h"
 /**
 * _isalpha -it for alphabetic character
 * @h:the char to checked
 * Return:1 if h is a letter 0 otherwise
 */
int _isalpha(int h)
{
	return ((h >= 'a' && h <= 'z') || (h >= 'A' && h <= 'Z'));
}
