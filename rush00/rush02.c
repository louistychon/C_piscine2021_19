/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <ltychon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:59:50 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/18 09:32:57 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	f(char a, char b, char d, int *x);

void	rush(int x, int y)
{
	int	index_y;

	index_y = 1;
	if (y > 1)
	{
		f('A', 'B', 'A', &x);
		while (y > 0 && index_y < y - 1)
		{
			f('B', ' ', 'B', &x);
			index_y ++;
		}
		f('A', 'B', 'A', &x);
	}
	else if (y == 1)
	{
		f('A', 'B', 'A', &x);
	}
}

void	f(char a, char b, char d, int *x)
{
	int	index_x;
    
		index_x = 0;
	if (*x > 1)
	{
		ft_putchar(a);
		index_x ++;
		while (index_x > 0 && index_x < (*x - 1))
		{
			ft_putchar(b);
			index_x ++;
		}
		ft_putchar(d);
		ft_putchar('\n');
	}
	else if (*x == 1)
	{
		ft_putchar(a);
		ft_putchar('\n');
	}
}

int main (void)
{
    rush(5,1);
    return (0);
}
