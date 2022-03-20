/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 13:29:10 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/24 20:13:55 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_isspace(char *str)
{
	int	x;

	x = 0;
	while (str[x] == '\t'
		|| str[x] == '\n'
		|| str[x] == '\v'
		|| str[x] == '\f'
		|| str[x] == '\r'
		|| str[x] == ' ')
	{
		x++;
	}
	return (x);
}

int	ft_atoi(char *str)
{	
	int	a;
	int	b;
	int	i;

	b = 1;
	i = 0;
	a = 0;
	a = ft_isspace(&str[a]);
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
		{
				b = b * -1;
		}
		a++;
	}
	while (str[a] >= 48 && str[a] <= 57)
	{
		i = i * 10 + str[a] - '0';
		a++;
	}
	return (i * b);
}

/*int main()
{
	char	tab[] =" ----+-+978a6ab567" ;
	printf("atoi: %d", ft_atoi(tab));
}*/
