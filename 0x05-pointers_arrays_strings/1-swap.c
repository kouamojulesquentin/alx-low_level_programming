#include"main.h"

/**
 * swap - swap the value of two integer
 * @a : first value
 * @b : second value
 */

void swap( int *a, int *b)
{
int c;
c = *b;
*b = *a;
*a = c;
}
