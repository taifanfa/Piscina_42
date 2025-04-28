/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 10:36:56 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/29 10:49:11 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*s1 - *s2);
}

/*int main (void)
{
	char s1[] = "Hello";
	char s2[] = "world hello";

	int result = ft_strncmp(s1, s2, 20);
	if (result < 0)
	{
		printf("%s is less than %s\n", s1, s2);
	}
	else if (result > 0)
	{
		printf("%s is greater than %s\n", s1, s2);
	}
	else
	{
		printf("%s is equal to %s\n", s1, s2);
	}
	return (0);
}*/
