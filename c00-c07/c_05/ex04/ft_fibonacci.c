/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:46:40 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/26 16:04:12 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	res = 0;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	if (index)
	res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}
/*#include <stdio.h>
int main ()
{
	int x;

	x = 25;
	printf("%d",ft_fibonacci(x));
}*/
