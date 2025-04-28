/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver_board.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrito-g <kbrito-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:35:05 by kbrito-g          #+#    #+#             */
/*   Updated: 2025/03/23 20:52:47 by kbrito-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_solver_board(int board[4][4], int row, int col, int hints[16]);
int	ft_is_board_valid(int board[4][4], int hints[16]);
int	ft_is_valid(int board[4][4], int row, int col, int num);

int	ft_solver_board(int board[4][4], int row, int col, int hints[16])
{
	int	num;

	num = 1;
	if (row == 4)
	{
		return (ft_is_board_valid(board, hints));
	}
	if (col == 4)
		return (ft_solver_board(board, row + 1, 0, hints));
	while (num <= 4)
	{
		if (ft_is_valid(board, row, col, num))
		{
			board[row][col] = num;
			if (ft_solver_board(board, row, col + 1, hints))
				return (1);
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}
