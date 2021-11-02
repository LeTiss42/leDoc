/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 11:24:19 by mravera           #+#    #+#             */
/*   Updated: 2021/09/10 11:35:55 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
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

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char	dest[20] = "b";
	char	dest2[20] = "b";
	char	*src1 = argv[1];
	char	*src2 = argv[1];
	int		nb = atoi(argv[2]);

	printf("s1 = [%s]\n", dest);
	printf("s2 = [%s]\n", src1);
	printf("tot1= [%s]\n", ft_strncat(dest, src1, nb));
	printf("tot2= [%s]\n", strncat(dest2, src2, nb));
	return (0);
}
*/
