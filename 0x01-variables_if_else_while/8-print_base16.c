#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{int m;
char l;

for (m = 0; m < 16; m++)
putchar((m % 16) + '0')

for (l = 'a'; l <= 'f'; l++)
putchar(l)

putchar('\n');
return (0);
}
