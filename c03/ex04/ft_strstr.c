/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:38:59 by mravera           #+#    #+#             */
/*   Updated: 2021/09/10 13:48:24 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (*to_find == 0)
		return (str);
	while (str[i] != 0)
	{
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == 0)
				return (&str[i]);
			else
				j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[] = "klsjdhfkjahcocoucoukshjwhefcoucouoshdhdjlakjsd";
	char	src[] = "bonjour";
	char	dest2[] = "klsjdhfkjahcocoucoukshjwhefcoucouoshdhdjlakjsd";
	char	src2[] = "bonjour";

	printf("s1 = [%s]\n", dest);
	printf("s2 = [%s]\n", src);
	printf("tot1= [%s]\n", strstr(dest, src));
	printf("tot2= [%s]\n", ft_strstr(dest2, src2));
	return (0);
}
*/
