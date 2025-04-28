/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 16:22:23 by tmorais-          #+#    #+#             */
/*   Updated: 2025/03/30 20:28:33 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_process_number(char *num, char *nums[], char *words[]);
void	ft_number_in_words(char *filename, char *numbers[], char *words[]);
void	ft_free_dict(char *numbers[], char *words[], int size);
int		ft_isnbr(char *str);
void	ft_dct_in(char *filename, char *numbers[], char *words[], char argv[]);

int	main(int argc, char **argv)
{
	char	**nums;
	char	**words;
	int		i;

	i = 0;
	nums = (char **)malloc(42 * sizeof(char *));
	words = (char **)malloc(42 * sizeof(char *));
	while (i < 42)
	{
		nums[i++] = NULL;
		words[i++] = NULL;
	}
	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (!ft_isnbr(argv[1]))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	ft_dct_in("numbers.dict", nums, words, argv[1]);
	ft_free_dict(nums, words, 42);
	return (0);
}
