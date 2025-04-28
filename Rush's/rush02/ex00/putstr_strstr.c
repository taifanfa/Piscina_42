/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_strstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:24:38 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/30 19:28:49 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_my_strstr(char *str, char *to_find);
void	ft_putsrt(char *str);

void	ft_putsrt(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

char	*ft_my_strstr(char *str, char *to_find)
{
	int	i;
	int	temp;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			temp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					temp = 1;
				i++;
			}
			if (temp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
