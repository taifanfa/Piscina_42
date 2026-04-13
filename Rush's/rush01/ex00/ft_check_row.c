/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_row.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfanfa <tmfanfa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 21:46:08 by tmfanfa           #+#    #+#             */
/*   Updated: 2026/04/12 21:48:39 by tmfanfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_visible(int row[4]);

// Verifica hitn de uma linha (da esquerda)
int ft_check_row(int board[4][4], int row_ids, int hint)
{
	int line[4];
	int j;

	j = 0;
	while (j < 4)
	{
		line[j] = board[row_ids][j];
		j++;
	}
	return (ft_count_visible(line) == hint);
}
