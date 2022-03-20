/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:42:21 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/17 13:14:50 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	caracteres(int c)
{
	char	nbr1;
	char	nbr2;

	nbr1 = c / 10 + '0';
	nbr2 = c % 10 + '0';
	write (1, &nbr1, 1);
	write (1, &nbr2, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 00;
	b = 00;
	while (a <= 98)
	{
		b = a;
		while (++b <= 99)
		{
			caracteres(a);
			write(1, " ", 1);
			caracteres(b);
			if (a != 98 | b != 99)
				write(1, ", ", 2);
		}
		a++;
	}
}
