/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:01:15 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/21 16:36:46 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;

	a = 0;
	if (size > 0)
	{
		while (*(src + a) != '\0')
		{
			if (a == size)
			{
				a--;
				break ;
			}
			*(dest + a) = *(src + a);
			a++;
		}
	}
	*(dest + a) = '\0';
	while (*(src + a) != '\0')
		a++;
	return (a);
}
/*int	main(void)
{
	unsigned int c = 4;
	char	tab[] = "SHEH";
	char	tab2[] = "salut";

	printf("%s\n", tab);
	printf("%s\n\n", tab2);
	strlcpy(tab, tab2, c);
	ft_strlcpy(tab, tab2, c);
	printf("%s\n", tab);
	printf("%s\n", tab2);
}*/
