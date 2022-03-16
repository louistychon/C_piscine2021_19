/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 21:47:34 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/29 14:08:23 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(range * sizeof (int));
	range = max - min;
	if (min >= max)
		return (0);
	if (!(tab))
		return (0);
	while (i < range)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*int main(void)
{
	int 	i;
	int 	*tab;

	tab = ft_range(12,19);

	i = 0;	
	while (i < 7)
	{
	printf("%d",tab[i]);
	i++;
	}
}*/
