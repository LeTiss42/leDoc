/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:59:17 by mravera           #+#    #+#             */
/*   Updated: 2021/09/09 23:26:41 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[20] = "b";
	char	src[] = "toto";
	char	dest2[20] = "b";
	char	src2[] = "toto";

	printf("s1 = [%s]\n", dest);
	printf("s2 = [%s]\n", src);
	printf("tot1= [%s]\n", ft_strcat(dest, src));
	printf("tot2= [%s]\n", strcat(dest2, src2));
	return (0);
}
*/
