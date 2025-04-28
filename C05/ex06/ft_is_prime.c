/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:42:41 by tmorais-          #+#    #+#             */
/*   Updated: 2025/04/03 10:57:59 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (n <= nb / n)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int	n;

	n = 17;
	if (ft_is_prime(n) == 1)
	{
		printf("The number %d is prime.\n", n);
	}
	else
	{
		printf("The number %d is not prime.\n", n);
	}
	return (0);
}
