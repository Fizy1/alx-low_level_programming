#include "main.h"

/**
 * main - a function that prints the alphabet, in lowercase and a new line
 *
 * Description - a function that prints the alphabet, in lowercase
 *
 * Return: 0
 */

	/* printing alphabet from a to z */

	void print_alphabet(void) /* printing alphabet function */

	{
		char a;

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

	_putchar('\n');
	return;

	}
