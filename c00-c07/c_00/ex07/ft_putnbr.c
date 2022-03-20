/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:25:08 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/20 13:27:11 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
		if(nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if(nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar((nb % 10) + '0');
}

/*int main()
{
	int a = 42;
	int b = 9;
	int c = -54654564;
	ft_putnbr(a);
	ft_putnbr(b);
	ft_putnbr(c);
}*/
