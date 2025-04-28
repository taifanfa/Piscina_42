/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_board_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrito-g <kbrito-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:29:45 by kbrito-g          #+#    #+#             */
/*   Updated: 2025/03/23 20:52:19 by kbrito-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_board_valid(int board[4][4], int hints[16]);
int	ft_count_visibles_colup(int board[4][4], int hints[16]);
int	ft_count_visibles_coldown(int board[4][4], int hints[16]);
int	ft_count_visibles_rowleft(int board[4][4], int hints[16]);
int	ft_count_visibles_rowright(int board[4][4], int hints[16]);

int	ft_is_board_valid(int board[4][4], int hints[16])
{
	if (ft_count_visibles_colup(board, hints)
		&& ft_count_visibles_coldown(board, hints)
		&& ft_count_visibles_rowleft(board, hints)
		&& ft_count_visibles_rowright(board, hints))
	{
		return (1);
	}
	return (0);
}
