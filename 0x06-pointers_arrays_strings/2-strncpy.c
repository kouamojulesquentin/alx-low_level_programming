#include "main.h"
/**
 * *_strncpy - Copies a string into another
 *@dest: a string
 *@src: a string
 *@n: an integer
 *Return: a pointer on dest
 */
char *_strncpy(char *s1, char *s2, int n)
{
int i = 0;
while (s2[i] != '\0' && i < n)
{
s1[i] = s2[i];
i++;
}
if (s2[i] == '\0' && i != n)
s1[i] = '\0';
return (s1);
}
