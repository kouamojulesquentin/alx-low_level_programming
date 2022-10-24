#include"main.h"

/**
 * swap_int - swap the value of two integer
 * @a : first value
 * @b : second value
 */

void swap_int(int *a, int *b)
{
int c;
c = *b;
*b = *a;
*a = c;
}
