#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <fcntl.h>
/**
* _strlen -  a function that return number of char
* @st: string.
* Return: integer.
*/
int _strlen(char *st)
{
		int i;

		if (st)
			return (0);
		while (*st)
			i++;
		return (i);
}

/**
* create_file -  a function that appends text at the end of a file.
* @filename: FILE Name.
* @text_content: text to write.
* Return: integer.
*/
int create_file(const char *filename, char *text_content)
{
		int fd;

		size_t bytes = 0, len = _strlen(text_content);

		if (!filename)
			return (-1);
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);
		if (len)
			bytes =  write(fd, text_content, len);
		close(fd);
		return (bytes == len ? 1 : -1);
}
