/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:32:13 by tmorais-          #+#    #+#             */
/*   Updated: 2025/04/01 13:41:43 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	while (a * a <= nb && a < 46341)
	{
		if (a * a == nb)
		{
			return (a);
		}
		else
		{
			a++;
		}
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;

// 	a = 169;
// 	if (ft_sqrt(a) > 0)
// 	{
// 		printf("The square root of %d is %d.", a, ft_sqrt(a));
// 	}
// 	else
// 	{
// 		printf("The square root of %d is not an integer.", a);
// 	}
// 	return (0);
// }
