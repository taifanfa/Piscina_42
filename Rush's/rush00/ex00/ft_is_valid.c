/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrito-g <kbrito-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 18:44:50 by kbrito-g          #+#    #+#             */
/*   Updated: 2025/03/23 20:15:15 by kbrito-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_valid(int board[4][4], int row, int col, int num);

int	ft_is_valid(int board[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (board[row][i] == num || board[i][col] == num)
			return (0);
	i++;
	}
	return (1);
}
