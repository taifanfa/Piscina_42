/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_parse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrito-g <kbrito-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:38:21 by kbrito-g          #+#    #+#             */
/*   Updated: 2025/03/23 20:51:44 by kbrito-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	ft_check_and_parse(char *input, int *hints)
{
	int	n;
	int	h;

	n = 0;
	h = 0;
	while (input[n])
	{
		if (input[n] >= '1' && input[n] <= '4')
		{
			hints[h] = input[n] - '0';
			h++;
		}
		else if (input[n] != ' ')
		{
			ft_putstr("Error\n");
			return (0);
		}
		n++;
	}
	if (h != 16)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}
