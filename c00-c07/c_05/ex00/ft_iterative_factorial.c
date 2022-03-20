/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:59:32 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/27 13:53:02 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{	
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		fact = fact * nb;
		--nb;
	}
	return (fact);
}
/*
int main()
{
	int a;

	a = 1;
	printf("%d", ft_iterative_factorial(a));
}*/
