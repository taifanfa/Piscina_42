/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:14:21 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/17 16:38:55 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	swap;
	int	temp;

	swap = 1;
	while (swap)
	{
		swap = 0;
		i = 0;
		a = 0;
		while (a < size - i - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				temp = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = temp;
				swap = 1;
			}
			a++;
		}
		size--;
	}
}
