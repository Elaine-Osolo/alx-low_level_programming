#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int m;
for (m = 0; m <= 9; m++)
{putchar(m);
if (m != 9)
continue;

putchar(' , ');
putchar('');
}
putchar('\n');
return (0);
}
