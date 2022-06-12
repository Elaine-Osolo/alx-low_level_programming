#include "main.h"
/**
 * main - Entry point
 * Description: Print alphabet in lower case
 *
 * return (0)
 */
void print_alphabet(void)
{
char ch = 'a';

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
