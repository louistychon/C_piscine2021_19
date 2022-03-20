/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:08:54 by ltychon           #+#    #+#             */
/*   Updated: 2021/12/01 11:59:23 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < nb)
	{
			dest[a] = src[b];
			a++;
			b++;
	}
	dest[a] = '\0';
	return (dest);
}
/*int	main (void)
{
	unsigned int length = 5;
	char he[] = "hello";
	char cc[] = "coucou";
	char *x;

	x = ft_strncat(he,cc,length);
	printf("%s", x);
}*/
