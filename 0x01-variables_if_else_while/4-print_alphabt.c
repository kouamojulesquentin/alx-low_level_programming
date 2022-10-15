#include<stdio.h>

/**
 *print alphabet
 *Return: 0
 */
int main(void)
{
char c;
for(c='a';c<'z';c++)
{
if(c!='e' && c!='q')
{
puts(c);
}
}
 puts("\n");
return(0);   
}
