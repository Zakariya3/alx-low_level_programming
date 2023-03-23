#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    prist_last_digit(98);
    prist_last_digit(0);
    r = prist_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
