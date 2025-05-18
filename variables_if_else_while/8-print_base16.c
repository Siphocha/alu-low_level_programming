#include <stdio.h>
/**
 * Here we go again.
 *
 *
 */
int main(void)
{
    int i = '0';

    while (i <= '9')
    {
        putchar(i);
        i++;
    }
    i = 97;

    while (i < 103)
    {
        putchar(i);
        i++;
    }
    putchar('\n');
    return (0);
}