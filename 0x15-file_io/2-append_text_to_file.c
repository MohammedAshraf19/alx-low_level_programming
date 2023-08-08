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
		for (i = 0; st[i] != '\0'; i++)
		{}
		return (i);
}

/**
* append_text_to_file -  a function that appends text at the end of a file.
* @filename: FILE Name.
* @text_content: text to write.
* Return: integer.
*/
int append_text_to_file(const char *filename, char *text_content)
{
		int fd, bytes = 0, len = _strlen(text_content);

		if (!filename)
			return (-1);
		fd = open(filename, O_APPEND | O_WRONLY);
		if (fd == -1)
			return (-1);
		if (len != 0)
			bytes = write(fd, text_content, len);
		close(fd);
		return (bytes == len ? 1 : -1);
}
