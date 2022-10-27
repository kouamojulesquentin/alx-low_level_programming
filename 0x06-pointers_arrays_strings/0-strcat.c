#include "main.h"

/**
 * _strcat - concatenates two strings
 * @s1: string to append to
 * @s2: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *s1, char *s2)
{
int i, j;

i = 0;
j = 0;

while (s1[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
s1[i + j] = src[j];
j++;
}
s1[i + j] = '\0';
return (s1);
}
