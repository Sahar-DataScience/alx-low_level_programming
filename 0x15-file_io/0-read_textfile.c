#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - prints text from a file
 *
 * @filename: name of the file
 * @letters: number of characters to read
 *
 * Return: actual number of letters read, 0 if end of file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, L, c;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(buf);
		return (0);
	}
	L = read(f, buf, letters);
	if (L == -1)
	{
		free(buf);
		close(f);
		return (0);
	}

	c = write(STDOUT_FILENO, buf, L);

	free(buf);
	close(f);
	if (c != L)
		return (0);
	return (L);
}
