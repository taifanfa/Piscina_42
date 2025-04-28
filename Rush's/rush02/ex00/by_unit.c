/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   by_unit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:14:38 by gaguiar-          #+#    #+#             */
/*   Updated: 2025/03/30 20:33:40 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_my_strstr(char *str, char *to_find);
void	ft_by_unit(char *numbers[], char *words[], char *number);
int		ft_get_length(char *number);

void	ft_by_unit(char *numbers[], char *words[], char *number)
{
	int		count;
	int		length;
	char	*translated;

	count = 0;
	length = ft_get_length(number);
	while (numbers[count])
	{
		if (ft_my_strstr(numbers[count], number))
		{
			translated = words[count];
			write(1, &translated, 12);
		}
		count++;
	}
}

int	ft_get_length(char *number)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (number[i])
	{
		length++;
		i++;
	}
	return (length);
}
