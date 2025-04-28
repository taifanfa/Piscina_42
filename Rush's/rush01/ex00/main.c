/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 12:55:50 by grodrig2          #+#    #+#             */
/*   Updated: 2025/03/23 17:38:44 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_check_and_parse(char *input, int *hint)
{
    int n;
    int h;
        
    n = 0;
    h = 0;
    while(input[n])
    {
        if (input[n] >= '1' && input[n] <= '4')
        {
        
            hint[h] = input[n] - '0';
            h++;
        }
        else if(input[n] != ' ')
        {
            write (1, "error\n", 6);
            return(1);
        }        
        n++;
    }
    return(h);
}

int main(int argc, char **argv)
{
    int n;
    int h;
    int hints[16];

    n = 0;
    h = 0;
    if ( argc != 2)
    {
        write (1, "Error\n", 6);
        return(1);
    }
    else 
    {
        h = ft_check_and_parse(argv[1], hints);

        if (h != 16)
        {
            write (1, "Error\n", 6);
        }
    }

}

