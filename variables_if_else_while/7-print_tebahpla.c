#include <stdio.h>
/**
 * lowercase alphabet but INVERSED
 *
 *
 */
int main(void)
{
    char i;

    for (i = 122; i >= 97; i--)
    {
        putchar(i);
    }
    putchar('\n');
    return (0);
}