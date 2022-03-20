/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:07:22 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/21 20:40:00 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[0] == 0)
	{
		return (str);
	}
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b])
		{	
			if (to_find[b + 1] == '\0')
				return (&str[a]);
		b++;
		}	
	a++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>
#include <xlocale.h>

int main(void)
{
	char *s1 = "hello bg de la rue";
    char *s2 = "la";
  
    printf("%s", ft_strstr(s1, s2));
}*/
