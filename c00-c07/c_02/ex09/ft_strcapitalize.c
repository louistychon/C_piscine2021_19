/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:33:23 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/18 14:37:06 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		a;
	int		maj;
	char	c;

	a = 0;
	maj = 1;
	while (str[a])
	{
		c = str[a];
		if (maj == 1 && c >= 'a' && c <= 'z')
			str[a] -= 32;
		else if (maj == 0 && c >= 'A' && c <= 'Z')
			str[a] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			maj = 1;
		else
			maj = 0;
		a++;
	}
	return (str);
}

/*int	main(void)
{
	char	tab[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";	

	ft_strcapitalize(tab);

	printf("%s", tab);
}*/
