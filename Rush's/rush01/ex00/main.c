/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfanfa <tmfanfa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 22:03:23 by tmfanfa           #+#    #+#             */
/*   Updated: 2026/04/12 22:12:17 by tmfanfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_clear_board(int board[4][4]);
void	ft_print_board(int board[4][4]);
int		ft_solve(int board[4][4], int hints[16], int pos);

static int	ft_check_and_parse(char *input, int *hint)
{
	int	n;
	int	h;

	n = 0;
	h = 0;
	while (input[n])
	{
		if (input[n] >= '1' && input[n] <= '4')
		{
			hint[h] = input[n] - '0';
			h++;
		}
		else if (input[n] != ' ')
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		n++;
	}
	return (h);
}

int	main(int argc, char **argv)
{
	int	board[4][4];
	int	hints[16];
	int	h;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	h = ft_check_and_parse(argv[1], hints);
	if (h != 16)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_clear_board(board);
	if (ft_solve(board, hints, 0))
		ft_print_board(board);
	else
		write(1, "Error\n", 6);
	return (0);
}

