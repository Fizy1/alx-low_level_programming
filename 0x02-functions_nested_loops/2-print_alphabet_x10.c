#include "main.h"

/**
 * print_alphabet_10x - a function that prints the alphabet 10 times
 *
 * Description: A function that prints the alphabet, in lowercase 10 time
 *
 * Return: 0
 */

	void print_alphabet_10x(void)
	{
		char a;
		int i;

		for (i = 1; i <= 10; i++)
		{
			for (a = 'a'; a <= 'z'; a++)
			{
				_putchar(a);
			}
		}
		_putchar('\n');
		return;
	}
