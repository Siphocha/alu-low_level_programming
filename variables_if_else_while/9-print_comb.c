#include <stdio.h>
/**
 * Possible combination of single digit nums
 *
 *
 */
int main(void)
{
    int i;

    for (i = 48; i <= 57; i++)
    {
        putchar(i);
        if (i == 57)
        {
            break;
        }

        putchar(',');
        putchar(' ');
    }
    putchar('\n');
    return (0);
}