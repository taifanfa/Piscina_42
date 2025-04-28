/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_in_lines.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:15:00 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/30 20:25:50 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>

void	ft_split_line(char *line_end);
void	ft_through_line(char *each_content);
void	ft_divide_in_lines(char *numbers[], char *words[], char *line_start);
int		ft_todict(char *numbers[], char *words[], char *word, char *line_start);

void	ft_divide_in_lines(char *numbers[], char *words[], char *line_start)
{
	char	*line_end;
	char	*each_content;
	char	*word;

	while (*line_start)
	{
		line_end = line_start;
		while (*line_end != '\n' && *line_end != '\0')
		{
			line_end++;
			ft_split_line(line_end);
			each_content = line_start;
			ft_through_line(each_content);
			if (*each_content == ':')
			{
				*each_content = '\0';
				word = each_content + 1;
				while (*word == ' ')
					word++;
				if (ft_todict(numbers, words, word, line_start) == -1)
					return ;
			}
		}
		line_start = line_end + 1;
	}
}

void	ft_split_line(char *line_end)
{
	if (*line_end == '\n')
	{
		*line_end = '\0';
	}
}

void	ft_through_line(char *each_content)
{
	while (*each_content != ':' && *each_content != '\0')
	{
		each_content++;
	}
}
