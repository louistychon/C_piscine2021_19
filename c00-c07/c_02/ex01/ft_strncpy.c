/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:25:43 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/21 16:43:41 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n)
	{
		if (src[a] != '\0')
		{
			dest[a] = src[a];
			a++;
		}
		else
		{
			while (a < n)
			{
				dest[a] = '\0';
				a++;
			}
		}
	}
	return (dest);
}
/*int    main(void)
{
    char    tab[] = "coucou";
    char    tab2[] = "xdsdsds";
    int x = 3;
    
    ft_strncpy(tab, tab2, x);
    
    printf("%s", tab);
}*/
