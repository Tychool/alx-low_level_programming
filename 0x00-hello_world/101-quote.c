#include <unistd.h>

/**
 * main - Prints "and that piece of art is usefull" - Dora Kopar, 2015-10-19"
 * Followed by a new line to standard error.
 *
 * Return: always 1.
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Kompar, 2015-10-19\n", 59);
	return (1);
}
