/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltychon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:39:33 by ltychon           #+#    #+#             */
/*   Updated: 2021/11/21 16:22:17 by ltychon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
		{
			return (0);
		}
		str ++;
	}
	return (1);
}

/*int    main(void)
{
    char    tab[] = "0SHEHi0";
    char    tab2[] = "Salut";
    
	int a = ft_str_is_alpha(tab);
	int b = ft_str_is_alpha(tab2);


    printf("%d\n", a);
    printf("%d\n", b);
}*/
