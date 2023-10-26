#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The unsigned long integer to be converted and printed in binary.
 *
 * Description:
 * This function takes an unsigned long integer 'n' and prints its binary representation.
 * It recursively shifts the bits of 'n' to the right and prints each bit, starting from
 * the most significant bit (leftmost) down to the least significant bit (rightmost).
 *
 * @n: The number to be printed in binary.
 *
 * Return: No return value.
 */
void print_binary(unsigned long int n)
{
    if (n >> 0)
    {
        if (n >> 1)
            print_binary(n >> 1);
        _putchar((n & 1) + '0');
    }
    else
    {
        _putchar('0');
    }
}
