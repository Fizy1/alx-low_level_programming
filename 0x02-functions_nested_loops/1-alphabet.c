#include "main.h"
/*#include "1-main.c"*/

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
		while (a <= 'z')
		{
			_putchar('a');
			a++;
		}

	_putchar('\n');
	return;

	}
