#include "main.h"

/**
 * print_alphabet - this is a function
 * description: prints a-z in lowercase
 * Return: return nothing or void
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')

{
	_putchar(alphabet);
	alphabet++;
}
_putchar('\n');
}
