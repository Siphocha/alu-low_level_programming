#include <stdio.h>
/**
 * May Betty be pleased with this
 *
 *
 */
int main()
{
    char alphabet;
    char highCase;

    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        putchar(alphabet);
    }
    for (highCase = 'A'; highCase <= 'Z'; highCase++)
    {
        putchar(highCase);
    }

    putchar('\n');
    return (0);
}