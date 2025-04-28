/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 14:16:20 by tmorais-          #+#    #+#             */
/*   Updated: 2025/04/01 12:14:24 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 0)
	{
		return (1);
	}
	if (nb == 1)
	{
		return (1);
	}
	if (nb > 1)
	{
		while (nb > 1)
		{
			result = result * (--nb);
		}
		return (result);
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 5;
// 	b = 1;
// 	printf("Fatorial of %d is %d\n", a, ft_iterative_factorial(a));
// 	printf("Fatorial of %d is %d\n", b, ft_iterative_factorial(b));
// 	return (0);
// }
