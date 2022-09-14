#include "main.h"

/**
 * main - a function that prints the alphabet, in lowercase and a new line
 *
 * print_alphabet - 'a function that prints the alphabet, in lowercase'
 *
 * Return: 0
 */


	void print_alphabet(void)

	{
		char a;

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

	_putchar('\n');
	return;

	}
