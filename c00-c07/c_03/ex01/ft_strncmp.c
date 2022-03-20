/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:05:59 by ltychon           #+#    #+#             */
/*   Updated: 2021/12/01 11:56:45 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2) && n > 0)
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

/*int	main (void)
{
	char a[] = "couciou";
	char b[] = "coucou";
	int x;
	unsigned int y = 3;

	x = ft_strncmp(a,b,y);
	printf("%d", x);
}*/
