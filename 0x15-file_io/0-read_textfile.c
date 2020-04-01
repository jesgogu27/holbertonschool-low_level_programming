#include "holberton.h"

/**
*read_textfile - read file.
*@filename: name of file
*@letters: size of file.
*Return: number of byte
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t nr_bytes;
char *buf;
int fd, r;

buf = malloc(sizeof(char) * letters);
fd = open(filename, O_RDONLY);

if (fd == -1)
{
return (0);
}
else
{
nr_bytes = read(fd, buf, letters);
if (nr_bytes == -1)
{
return (0);
}
else
{
r = write(STDOUT_FILENO, buf, nr_bytes);
if (r == -1)
return (0);
}
}
close(fd);
return (r);
}
