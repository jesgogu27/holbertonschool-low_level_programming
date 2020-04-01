#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
*read_textfile - read file.
*@filename: name of file
*@letters: size of file.
*Return: number of byte
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
size_t nr_bytes;
char buf[1024];
int fd, r;

fd = open(filename, O_RDONLY);

if (fd == -1)
{
printf("Error al abrir el archivo");
return (0);
}
else
{
nr_bytes = read(fd, buf, letters);
close(fd);
if (nr_bytes == 0)
{
printf("archivo vacio");
}
else
{
printf("%s\n", buf);
r = (int)nr_bytes;
}
}
return (r);
}
