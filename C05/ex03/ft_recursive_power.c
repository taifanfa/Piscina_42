/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:11:57 by tmorais-          #+#    #+#             */
/*   Updated: 2025/04/01 13:23:23 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	result;

// 	a = 5;
// 	b = 3;
// 	result = ft_recursive_power(a, b);
// 	printf("%d power of %d is %d.\n", a, b, result);
// 	return (0);
// }
