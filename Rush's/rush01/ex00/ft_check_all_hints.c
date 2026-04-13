/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all_hints.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfanfa <tmfanfa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 21:56:40 by tmfanfa           #+#    #+#             */
/*   Updated: 2026/04/12 22:19:31 by tmfanfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_visible(int row[4]);

static int	ft_check_col_from_top(int board[4][4], int col, int hint)
{
	int	line[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = board[i][col];
		i++;
	}
	return (ft_count_visible(line) == hint);
}

static int	ft_check_col_from_bottom(int board[4][4], int col, int hint)
{
	int	line[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = board[3 - i][col];
		i++;
	}
	return (ft_count_visible(line) == hint);
}

static int	ft_check_row_from_left(int board[4][4], int row, int hint)
{
	int	line[4];
	int	j;

	j = 0;
	while (j < 4)
	{
		line[j] = board[row][j];
		j++;
	}
	return (ft_count_visible(line) == hint);
}

static int	ft_check_row_from_right(int board[4][4], int row, int hint)
{
	int	line[4];
	int	j;

	j = 0;
	while (j < 4)
	{
		line[j] = board[row][3 - j];
		j++;
	}
	return (ft_count_visible(line) == hint);
}

int	ft_check_all_hints(int board[4][4], int hints[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!ft_check_col_from_top(board, i, hints[i]))
			return (0);
		if (!ft_check_col_from_bottom(board, i, hints[4 + i]))
			return (0);
		if (!ft_check_row_from_left(board, i, hints[8 + i]))
			return (0);
		if (!ft_check_row_from_right(board, i, hints[12 + i]))
			return (0);
		i++;
	}
	return (1);
}

