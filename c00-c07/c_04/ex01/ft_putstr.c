/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:01:20 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/24 20:17:41 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*int main(void)
{
	char s1[] = "hello bg de la rue";
  
	ft_putstr(s1); 
}*/
