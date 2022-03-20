/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:21:39 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/26 16:02:59 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 1)
		return (!power);
	res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
/*#include <stdio.h>
int main()
{
	printf("%d",ft_recursive_power(4,5));
}*/
