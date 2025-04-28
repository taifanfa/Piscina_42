/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:25:35 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/31 13:18:43 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
	char *s1 = "bbd";
	char *s2 = "abd";

	int result = ft_strcmp(s1, s2);
	if (result < 0)
	{
		printf("'%s' is less than '%s'\n", s1, s2);
	}
	else if (result > 0)
	{
		printf("'%s' is greater than '%s'\n", s1, s2);
	}
	else
	{
		printf("'%s' is equal to '%s'\n", s1, s2);
	}
	return (0);
}
