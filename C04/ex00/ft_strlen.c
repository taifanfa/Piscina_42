/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 19:07:18 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/31 12:19:01 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*int	main(void)
{
	char	*str;
	int		lenght;

	str = "The book is on the table.\n";
	lenght = ft_strlen(str);
	printf("%s\n", str);
	printf("String has %d characteres.\n", lenght);
	return (0);
}*/
