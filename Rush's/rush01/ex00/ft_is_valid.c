/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfanfa <tmfanfa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 21:49:09 by tmfanfa           #+#    #+#             */
/*   Updated: 2026/04/12 21:51:00 by tmfanfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_valid(int board[4][4], int row, int col, int num)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (board[row][i] == num) // ja na linha
			return (0);
		if (board[i][col] == num) // já na coluna
			return (0);
		i++;
	}
	return (1);
}
