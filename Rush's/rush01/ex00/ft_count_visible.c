/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_visible.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmfanfa <tmfanfa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 21:41:48 by tmfanfa           #+#    #+#             */
/*   Updated: 2026/04/12 21:45:08 by tmfanfa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// conta quantos prédios são visiveis de uma extremidade
// Entrada: array com 4 valores (ex: [3,1,4,2])
// Um prédio é visivel se for mais alto que todos os anteriores

int ft_count_visible(int row[4])
{
	int	max;
	int	visible;
	int	i;

	max = 0;
	visible = 0;
	i = 0;
	while (i < 4)
	{
		if (row[i] > max)
		{
			visible++;
			max = row[i];
		}
		i++;
	}
	return (visible);
}

// Exemplo visual: linha [1, 3, 2, 4]  Olhando da esquerda: vejo 1 (max=1),
// depois 3 > 1 (max=3, visivel), depois 2 < 3 (bloqueado),
// depois 4 > 3 (max=4, visivel).  Resultado: 3 visiveis.
