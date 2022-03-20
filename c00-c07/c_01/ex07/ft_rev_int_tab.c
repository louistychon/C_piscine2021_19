/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:45:27 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/28 15:39:40 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	i;

	i = 0;
	index = 0;
	while (index < size / 2)
	{
		i = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = i;
		index++;
	}
}
/*
int main (void)
{
	int i;
	int tab[6] = {0, 1, 5, 7, 9};

	ft_rev_int_tab(tab, 5);
	i = 0;
	while(i < 5)
	{
		printf("%d",tab[i]);
		i++;
	}
	return (0);
}*/
