/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 17:26:39 by mravera           #+#    #+#             */
/*   Updated: 2021/09/13 16:59:58 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				j;
	int				x;
	int				y;

	y = 0;
	i = 0;
	j = 0;
	while (src[y])
		y++;
	while (dest[i])
		i++;
	x = size - i - 1;
	while (j < x && src[j] && x > 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	if (size < i)
		return (size + y);
	else
		return (i + y);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char	dest1[5] = "aaaa";
	char	dest2[5] = "aaaa";
	char	*src1 = argv[1];
	char	*src2 = argv[1];
	int		nb = atoi(argv[2]);

	printf("dest1 = [%s]\n", dest1);
	printf("src1 = [%s]\n", src1);
	printf("return1= [%u]\n", ft_strlcat(dest1, src1, nb));
	printf("return2= [%lu]\n", strlcat(dest2, src2, nb));
	printf("dest1 = [%s]\n", dest1);
	printf("dest2 = [%s]\n", dest2);
	return (0);
}

