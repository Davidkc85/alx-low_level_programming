#include <stdio.h>
#include "main.h"

/**
 * swap_int - this function swaps the value of two integers
 * @a: a pointer deference for changing the value of the variablr a
 * @b: a pointer deference for changing the value of the variable b
 * int c: assigning the addreses of the variable a to c
 * Author: AkutaDavid
 * Return 0 success.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
