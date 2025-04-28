/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:45:52 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/30 17:50:17 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	sinal;

	num = 0;
	i = 0;
	sinal = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sinal = sinal * (-1);
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sinal);
}

/*#include <stdio.h>

int main()
{
	char str1[] = "   -12345";
	char str2[] = "42";
	char str3[] = "  +567";
	char str4[] = "   0";

	printf("Resultado 1: %d\n", ft_atoi(str1));  // Deve imprimir -12345
	printf("Resultado 2: %d\n", ft_atoi(str2));  // Deve imprimir 42
	printf("Resultado 3: %d\n", ft_atoi(str3));  // Deve imprimir 567
	printf("Resultado 4: %d\n", ft_atoi(str4));  // Deve imprimir 0

	return 0;
}
*/