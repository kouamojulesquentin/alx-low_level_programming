#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @s1: The buffer storing the string copy.
 * @s2: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *s1, char *s2, int n)
{
int i = 0, j = 0;

while (s2[i++])
j++;

for (i = 0; s2[i] && i < n; i++)
s1[i] = s2[i];

for (i = j; i < n; i++)
s1[i] = '\0';

return (s1);
}
