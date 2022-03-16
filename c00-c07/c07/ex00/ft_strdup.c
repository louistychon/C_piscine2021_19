/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:11:53 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/28 11:00:22 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{	
	char	*str;
	int		size;
	int		i;

	size = 0;
	str = malloc(size * sizeof(char));
	while (src[size])
	{
		size++;
	}	
	if (!(str))
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	src[i] = '\0';
	return (str);
}

int	main()
{
	char	source[] = "coksksku";

	printf("%s\n",strdup(source));
}
