/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utility.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:12:52 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/30 18:25:47 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>

char	*ft_allocate_and_copy_string(char *source);
int		ft_todict(char *numbers[], char *words[], char *word, char *line_start);

char	*ft_allocate_and_copy_string(char *source)
{
	int		len;
	char	*dest;
	int		i;

	if (!source)
		return (NULL);
	len = 0;
	while (source[len] != '\0')
		len++;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}

int	ft_todict(char *numbers[], char *words[], char *word, char *line_start)
{
	words[0] = ft_allocate_and_copy_string(word);
	if (!words[0])
	{
		return (-1);
	}
	numbers[0] = ft_allocate_and_copy_string(line_start);
	if (!numbers[0])
	{
		free(words[0]);
		return (-1);
	}
	return (0);
}
