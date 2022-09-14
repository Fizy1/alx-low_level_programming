#include "main.h"

/**
 * main - a function that prints the alphabet, in lowercase and a new line
 * 
 * Description - a function that prints the alphabet, in lowercase
 *
 * Return: 0
 */
	char a;

	void print_alphabet(void)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

	_putchar('\n');
	return;

	}
