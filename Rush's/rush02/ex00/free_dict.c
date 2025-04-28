/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 18:34:27 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/30 19:22:00 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free_dict(char *numbers[], char *words[], int size);

void	ft_free_dict(char *numbers[], char *words[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (numbers[i] != NULL)
		{
			free(numbers[i]);
		}
		if (words[i] != NULL)
		{
			free(words[i]);
		}
		i++;
	}
}
