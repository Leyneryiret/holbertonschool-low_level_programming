#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 * @filename: file.
 * @letters: Number of letters it should read and print.
 * Return: Actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, res_read, res_write;
char buf[2000];

if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

if (buf == NULL)
return (0);
res_read = read(fd, buf, letters);
if (res_read == -1)
{
return (0);
}
res_write = write(STDOUT_FILENO, buf, res_read);
if (res_write == -1 || res_read != res_write)
{
return (0);
}
close(fd);
return (res_write);
}
