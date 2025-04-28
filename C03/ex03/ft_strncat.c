/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:06:33 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/26 13:40:07 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp_dest;

	temp_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (temp_dest);
}

/*int main(void)
{
	char dest[20] = "Hello";
	char src[] = " World!";
	int nb = 7;

	printf("Before: %s\n", dest);
	ft_strncat(dest, src, nb);
	printf("After: %s\n", dest);
	return (0);
}*/
