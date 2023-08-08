#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* read_textfile -  reads a text file and prints it to standard output.
* @filename: FILE Name.
* @letters: Size of letters.
* Return: integer.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;

		ssize_t bytes;

		char ch[1024 * 8];

		if (!filename || !letters)
			return (0);
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);
		bytes = read(fd, &ch[0], letters);
		bytes = write(STDOUT_FILENO, &ch[0], bytes);
		close(fd);
		return (bytes);
}
