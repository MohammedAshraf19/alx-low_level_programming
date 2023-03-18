#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints quote using write function
 *
 * Return: Always 1 (Not Success)
*/

int main(void)
{		char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

		write(1, quote, 59);
		return (1);
}
