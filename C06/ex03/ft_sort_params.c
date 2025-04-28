/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:54:16 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/31 14:10:18 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *av1, char *av2);
void	ft_sort_argv(char **av, int ac);

int	ft_strcmp(char *av1, char *av2)
{
	int	i;

	i = 0;
	while (av1[i] == av2[i] && av1[i] != '\0' && av2[i] != '\0')
	{
		i++;
	}
	return (av1[i] - av2[i]);
}

void	ft_sort_argv(char **av, int ac)
{
	int		i;
	int		a;
	char	*temp;
	int		swap;

	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 0;
		a = 0;
		while (a < ac - i - 1)
		{
			if (ft_strcmp(av[a], av[a + 1]) > 0)
			{
				temp = av[a];
				av[a] = av[a + 1];
				av[a + 1] = temp;
				swap = 1;
			}
			a++;
		}
		ac--;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	ft_sort_argv(argv + 1, argc - 1);
	j = 0;
	while (j < argc - 1)
	{
		i = 0;
		while (argv[j + 1][i] != '\0')
		{
			write(1, &argv[j + 1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
