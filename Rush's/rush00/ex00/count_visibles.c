/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_visibles.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrito-g <kbrito-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:43:45 by kbrito-g          #+#    #+#             */
/*   Updated: 2025/03/23 20:51:12 by kbrito-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_visibles_colup(int board[4][4], int hints[16]);
int	ft_count_visibles_coldown(int board[4][4], int hints[16]);
int	ft_count_visibles_rowleft(int board[4][4], int hints[16]);
int	ft_count_visibles_rowright(int board[4][4], int hints[16]);

int	ft_count_visibles_colup(int board[4][4], int hints[16])
{
	int	j;
	int	i;
	int	max;
	int	count;

	j = 0;
	while (j < 4)
	{	
		i = 0;
		max = 0;
		count = 0;
		while (i < 4)
		{
			if (board[i][j] > max)
			{
				max = board[i][j];
				count++;
			}
			i++;
		}
		if (count != hints[j])
			return (0);
		j++;
	}
	return (1);
}

int	ft_count_visibles_coldown(int board[4][4], int hints[16])
{
	int	j;
	int	i;
	int	max;
	int	count;

	j = 0;
	while (j < 4)
	{
		i = 3;
		max = 0;
		count = 0;
		while (i >= 0)
		{
			if (board[i][j] > max)
			{
				max = board[i][j];
				count++;
			}
			i--;
		}
		if (count != hints[j + 4])
			return (0);
		j++;
	}
	return (1);
}

int	ft_count_visibles_rowleft(int board[4][4], int hints[16])
{
	int	i;
	int	j;
	int	max;
	int	count;

	i = 0;
	while (i < 4)
	{
		j = 0;
		max = 0;
		count = 0;
		while (j < 4)
		{
			if (board[i][j] > max)
			{
				max = board[i][j];
				count++;
			}
			j++;
		}
		if (count != hints[i + 8])
			return (0);
		i++;
	}
	return (1);
}

int	ft_count_visibles_rowright(int board[4][4], int hints[16])
{
	int	i;
	int	j;
	int	max;
	int	count;

	i = 0;
	while (i < 4)
	{
		j = 3;
		max = 0;
		count = 0;
		while (j >= 0)
		{
			if (board[i][j] > max)
			{
				max = board[i][j];
				count++;
			}
			j--;
		}
		if (count != hints[i + 12])
			return (0);
		i++;
	}
	return (1);
}
