#include "main.h"
/**
 * read_textfile - reads and prints a text file to the POSIX standard output
 * @filename: a pointer to the name of the file to read.
 * @letters: the maximum number of letters that the function reads
 * Return: actual number of letters it could read and print
 * 0 if file cannot be opened or read
 * 0 if filename in NULL
 * 0 if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	char *buffer;
	ssize_t total_letters_read, total_letters_wrote;

	if (filename == NULL)
		return (0);
	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(n);
		return (0);
	}
	total_letters_read = read(n, buffer, letters);
	close(n);
	if (total_letters_read == -1)
	{
		free(buffer);
		return (0);
	}
	total_letters_wrote = write(STDOUT_FILENO, buffer, total_letters_read);
	free(buffer);
	if (total_letters_read != total_letters_wrote)
		return (0);
	return (total_letters_wrote);

}
