/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:21:29 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/26 13:40:14 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	temp;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			temp = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					temp = 1;
				i++;
			}
			if (temp == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

/*int main(void)
{
	char haystack[] = "Hello World";
	char needle[] = "World";
	char *result;

	result = ft_strstr(haystack, needle);
	if (result !=0)
	{
		printf("Substring found: %ld\n", result - haystack);
	}
	else
	{
		printf("Substring not found!\n");
	}
	return (0);
}*/
