#include "main.h"
/**
 * *_strncat - Concatenates two strings
 *@s1: a string
 *@s2: a string
 *@n: an integer
 *Return: a pointer on dest
 */
char *_strncat(char *s1, char *s2, int n)
{
int i = 0, j = 0;
while (s1[i] != '\0')
{
i++;
}
while (s2[j] != '\0' && j < n)
{
s1[i + j] = s2[j];
j++;
}
s1[i + j] = '\0';
return (s1);
}
