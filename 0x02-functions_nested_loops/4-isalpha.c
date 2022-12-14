#include "main"

/**
 * _isalpha - check for alphabetic character
 * @c: char to be checked
 * Return: 1 if letter lower or upper
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
