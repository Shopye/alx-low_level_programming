#include "main.h"

/**
 * swap_int - funstion that swaps the value of the integers.
 * @a: this is the first entry
 * @b: this is the second entry
 *
 *
 */
void swa_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
