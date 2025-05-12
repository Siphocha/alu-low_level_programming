#include <unistd.h>

/**
 * Now we're using write...it's even more specifci and technical
 * Than printf or put.
 *
 */
int main(void)
{
    write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1);
}