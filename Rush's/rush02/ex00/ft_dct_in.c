/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dct_in.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:04:48 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/30 20:19:05 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_divide_in_lines(char *numbers[], char *words[], char *line_start);
void	ft_dct_in(char *filename, char *numbers[], char *words[], char *argv[]);
void	ft_by_unit(char *numbers[], char *words[], char *number);

void	ft_dct_in(char *filename, char *numbers[], char *words[], char *argv[])
{
	int		fd;
	int		content_file;
	char	buf[1024];
	char	*line_start;
	int		i;

	fd = open(filename, O_RDONLY);
	content_file = read(fd, buf, sizeof(buf) - 1);
	i = 0;
	while (content_file > 0)
	{
		buf[content_file] = '\0';
		line_start = buf;
		ft_divide_in_lines(numbers, words, line_start);
		content_file = read(fd, buf, sizeof(buf) - 1);
	}
	close(fd);
	ft_by_unit(numbers, words, argv[1]);
}
