#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combination of 2-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int w, x, y, z;
{
for (w = '0'; w <= '99'; x++)
{
for (x = '0'; x <= '99'; y++)
{
for (y = '0'; y <= '99'; y++)
{
for (z = '0'; z <= '99'; z++)
{
if (((y + z) > (w + x) &&  y >= w || w < y)
{
putchar(w);
putchar(x);
putchar(y);
putchar(z);
{
if (x == 98 && y == 99)
continue;

putchar(',');
putchar(' ');
}
}
}
}
}
}
}
putchar('\n');
return (0);
}
