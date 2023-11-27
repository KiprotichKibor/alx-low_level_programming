#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int letters_count;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (letters_count = 0; text_content[letters_count]; letters_count++)
			;
		rwr = write(fd, text_content, letters_count);
		if (rwr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
