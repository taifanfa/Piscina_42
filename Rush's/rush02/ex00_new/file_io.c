#include "rush02.h"

static int	get_size(int fd)
{
	int		total;
	int		r;
	char	buf[BUF_SIZE];

	total = 0;
	r = read(fd, buf, BUF_SIZE);
	while (r > 0)
	{
		total += r;
		r = read(fd, buf, BUF_SIZE);
	}
	return (total);
}

char	*read_file(char *filename)
{
	int		fd;
	int		size;
	char	*buf;
	int		r;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	size = get_size(fd);
	close(fd);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	buf = malloc(size + 1);
	if (!buf)
		return (NULL);
	r = read(fd, buf, size);
	buf[r] = '\0';
	close(fd);
	return (buf);
}

