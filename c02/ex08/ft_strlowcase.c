/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 19:14:42 by mravera           #+#    #+#             */
/*   Updated: 2021/09/09 15:30:31 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char tab[0];
	char tab2[] = "iHHJHjjHjjjJJHJJJjjjJJjJwweeeee";
	printf("[%s]\n", ft_strlowcase(tab));
	printf("[%s]\n", ft_strlowcase(tab2));
	return (0);
}
*/
