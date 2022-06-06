#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y;
{
for (x = 0; x <= 98; x++)
{
for (y = x + 1; y <= 99; y++)
{
putchar(x);
putchar(y);

if (x == 98 && y == 99)
continue;

putchar(',');
putchar('');
}
}
putchar('\n');
return (0);
}
