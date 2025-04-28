/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:33:23 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/28 15:39:41 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{	
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	result_dest;
	unsigned int	result_src;

	i = ft_strlen(dest);
	j = 0;
	result_dest = ft_strlen(dest);
	result_src = ft_strlen(src);
	if (size <= result_dest)
		return (result_src + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (result_dest + result_src);
}

/*int	main(void)
{
	char		 dest[20] = "Hello, ";
	char		 *src = "Worlds!";
	unsigned int size = 20;
	unsigned int result;

	printf("Before concatenation: \n");
	printf("Dest = %s\n", dest);
	printf("Src = %s\n", src);
	result = ft_strlcat(dest, src, size);
	printf("\nAfter: \n");
	printf("Dest = %s\n", dest);
	printf("Length = %u\n", result);
	return (0);
}*/
