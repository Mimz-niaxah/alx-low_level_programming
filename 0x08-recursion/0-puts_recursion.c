#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
<<<<<<< HEAD
		_puts_recursion(s + 1);
=======
		_puts_recursions(s + 1);
>>>>>>> af9338efc7932e53af086bb56756fc4adb837962
	}
	else
		_putchar('\n');
}
<<<<<<< HEAD


=======
>>>>>>> af9338efc7932e53af086bb56756fc4adb837962
