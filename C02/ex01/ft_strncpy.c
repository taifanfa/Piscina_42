/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 12:39:49 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/27 10:01:26 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*result;

	result = dest;
	while (n > 0 && *src != '\0')
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		n--;
	}
	return (result);
}

/*int	main(void)
{
	char 	src[] = "Hello World";
	char	dest[50];

	ft_strncpy(dest, src, 30);
	printf("%s\n", dest);
	printf("Size of src: %lu, Size of destiny: %lu\n", sizeof(src), sizeof(dest));
	return (0);
}*/
