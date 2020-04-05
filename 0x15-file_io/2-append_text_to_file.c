#include "holberton.h"

/**
 *append_text_to_file - create file.
 *@filename: name of file
 *@text_content: content file
 *Return: number of byte
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd, i, r;

	mode_t tmode = O_APPEND | O_WRONLY | O_TRUNC;
	mode_t pmode = S_IRUSR | S_IWUSR;

	fd = open(filename, tmode, pmode);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			;
		}
		r = write(fd, text_content, i);

		if (r == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
