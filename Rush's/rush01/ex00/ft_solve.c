/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfanfa <tmfanfa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 21:51:25 by tmfanfa           #+#    #+#             */
/*   Updated: 2026/04/12 22:12:02 by tmfanfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_check_all_hints(int board[4][4], int hints[16]);
int ft_is_valid(int board[4][4], int row, int col, int num);

// Função recursiva de backtracking
// pos vai de 0 a 15 (celulas do grid, linha por linha)
int	ft_solve(int board[4][4], int hints[16], int pos)
{
	int row;
	int col;
	int num;

	if (pos == 16) // todas as células preenchidas
		return (ft_check_all_hints(board, hints));
	row = pos / 4;
	col = pos % 4;
	num = 1;
	while (num <= 4)
	{
		if (ft_is_valid(board, row, col, num))
		{
			board[row][col] = num;
			if (ft_solve(board, hints, pos + 1))
				return (1); //solução encontrada
			board[row][col] = 0; //backtrack
		}
		num++;
	}
	return (0); // nenhum numero funcionou aqui
}

