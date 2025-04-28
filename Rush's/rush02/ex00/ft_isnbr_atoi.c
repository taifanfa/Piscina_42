/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnbr_atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:17:25 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/30 19:29:54 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnbr(char *str);
int	ft_atoi(char *str);

int	ft_isnbr(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);
}
