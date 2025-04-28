/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrito-g <kbrito-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 12:55:50 by grodrig2          #+#    #+#             */
/*   Updated: 2025/03/23 20:50:25 by kbrito-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_and_parse(char *input, int *hints);
int		ft_solver_board(int board[4][4], int row, int col, int hints[16]);
void	ft_putstr(char *str);
void	ft_print_board(int board[4][4]);
void	ft_init_board(int board[4][4]);

int	main(int argc, char **argv)
{
	int	n;
	int	hints[16];
	int	board[4][4];

	n = 0;
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (ft_check_and_parse(argv[1], hints))
	{
		ft_init_board(board);
		if (ft_solver_board(board, 0, 0, hints))
		{
			ft_print_board(board);
			return (1);
		}
		else
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
}
