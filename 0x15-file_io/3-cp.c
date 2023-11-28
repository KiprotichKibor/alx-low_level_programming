#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - a function that copies contents of one file to another
 * @argc: arguments
 * @argv: arguments count
 * Return: 1 on success, exit on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, len = 1024, wrote, close_fd_from, close_fd_to;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	check_IO_stat(fd_from, -1, argv[1], 'O');
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(fd_to, -1, argv[2], 'W');
	while (len == 1024)
	{
		len = read(fd_from, buffer, sizeof(buffer));
		if (len == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		wrote = write(fd_to, buffer, len);
		if (wrote == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_fd_from = close(fd_from);
	check_IO_stat(close_fd_from, fd_from, NULL, 'C');
	close_fd_to = close(fd_to);
	check_IO_stat(close_fd_to, fd_to, NULL, 'C');
	return (0);
}
/**
 * check_IO_stat - checks whether a file can be opened or closed
 * @stat: file descriptor
 * @mode: closing or opening
 * @filename: name of the file
 * @fd: file descriptor
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

