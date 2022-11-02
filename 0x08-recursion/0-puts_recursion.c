#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar_('\n');
	else
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
}
