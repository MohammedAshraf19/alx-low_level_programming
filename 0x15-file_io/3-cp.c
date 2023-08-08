#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>
/**
* main - check the code
* @ac: Number of argument.
* @av: Array of string
* Return: Always 0.
*/
int main(int ac, char **av)
{
		int f_from, f_to;

		size_t bytes = 0;

		char c[1024];

		if (ac != 3)
			dprintf("Usage: cp file_from file_to\n"), exit(97);
		f_from = open(av[1], O_RDONLY);
		if (f_from == -1)
			dprintf("Error: Can't read from file %s\n", av[1]), exit(98);
		f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (f_to == -1)
			dprintf("Error: Can't write to %s\n", av[2]), exit(99);
		while ((bytes = read(f_from, c, 1024)) > 0)
			if (write(f_to, c, bytes) != bytes)
				dprintf("Error: Can't write to %s\n", av[2]), exit(99);
		if (bytes == -1)
			dprintf("Error: Can't read from file %s\n", av[1]), exit(98);
		f_from = close(f_from), f_to = close(f_to);
		if (f_from)
			dprintf("Error: Can't close %d\n", f_from), exit(100);
		if (f_to)
			dprintf("Error: Can't close %d\n", f_to), exit(100);
		return (0);
}
