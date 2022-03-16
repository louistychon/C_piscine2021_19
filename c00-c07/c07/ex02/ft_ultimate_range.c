/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:12:42 by ltychon           #+#    #+#             */
/*   Updated: 2021/12/01 11:52:49 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	(*range) = malloc(sizeof (int) * len);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}


#include <stdio.h>
int main(void)
	{
	    int     i;
	    int    **range;


	    ft_ultimate_range(&tab2, 12,19);
	
	    i = 0;    
	    while (i < 7)
	    {
	    printf("%d",tab[i]);
	    i++;
    }
}
