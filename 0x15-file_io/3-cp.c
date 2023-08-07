#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 4096

void copy_file(const char *src_file, const char *dest_file);
int open_file(const char *file, int flags, mode_t mode);
void close_file(int fd);
void handle_error(const char *msg);

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, otherwise an appropriate exit code.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

/**
 * copy_file - Copies the contents of a file to another file.
 * @src_file: The name of the source file.
 * @dest_file: The name of the destination file.
 */
void copy_file(const char *src_file, const char *dest_file)
{
	int from, to;
	ssize_t r, w;
	char buffer[BUFFER_SIZE];

	from = open_file(src_file, O_RDONLY, 0);
	to = open_file(dest_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(to, buffer, r);
		if (w != r)
			handle_error("Error: Can't write to destination file");
	}

	if (r == -1)
		handle_error("Error: Can't read from source file");

	close_file(from);
	close_file(to);
}

/**
 * open_file - Opens a file and handles errors if any.
 * @file: The name of the file to open.
 * @flags: The flags to use when opening the file.
 * @mode: The file mode to set if the file is created.
 *
 * Return: The file descriptor on success, otherwise exits with an error code.
 */
int open_file(const char *file, int flags, mode_t mode)
{
	int fd = open(file, flags, mode);
	if (fd == -1)
		handle_error("Error: Can't open file");

	return fd;
}

/**
 * close_file - Closes a file descriptor and handles errors if any.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c = close(fd);

	if (c == -1)
		handle_error("Error: Can't close file descriptor");
}

/**
 * handle_error - Prints an error message and exits the program with an error code.
 * @msg: The error message to be printed.
 */
void handle_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(99);
}

