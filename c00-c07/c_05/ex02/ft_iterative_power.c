/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:52:01 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/26 16:02:17 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 1)
		return (!power);
	res = nb;
	while (--power)
		res *= nb;
	return (res);
}
/*#include <stdio.h>
int main()
{
	printf("%d",ft_iterative_power(5,5));
}*/
