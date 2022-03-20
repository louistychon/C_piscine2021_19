/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:26:57 by ltychon           #+#    #+#             */
/*   Updated: 2021/12/01 11:59:06 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main (void)
{
	char i[] ="sssss";
	char j[] ="skjdsla^A kjf";
	char *x;
	char *y;
	
	x = ft_strcat(i,j);
	printf("%s\n", x);
}*/
