/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:08:09 by mravera           #+#    #+#             */
/*   Updated: 2021/11/30 00:10:38 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcatpute(char *dst, const char *src, size_t dstsize)
{
	int        len_dst;
        int        len_src;
        int        maxcat;
	int        i;

        len_dst = ft_strlen(dst);
        len_src = ft_strlen(src);
	i = 0;
	maxcat = dstsize - len_dst - 1;
	while (i < maxcat && src[i])
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	if (dstsize > len_dst)
		dst[len_dst + i] = 0;
	if (dstsize < len_dst)
		return (len_src + dstsize);
	else
		return (len_src + len_dst);
}

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
        int        len_dst;
        int        len_src;
        size_t        maxcat;
        int        i;

        len_dst = ft_strlen(dst);
        len_src = ft_strlen(src);
        i = 0;
        maxcat = dstsize - len_dst - 1;
        if (dstsize > len_dst)
        {
                while (i < maxcat && src[i])
                {
                        dst[len_dst + i] = src[i];
                        i++;
                }
        }
        //if (dstsize > len_dst)
        //        dst[len_dst + i] = 0;
        if (dstsize < len_dst)
                return (len_src + dstsize);
        else
                return (len_src + len_dst);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";

	dest[0] = 'B';
	/* 1 */ printf("n1 (%lu) = [%zu]\n",strlen(src), ft_strlcat(dest, src, 0));
	printf("dest1 (B)= [%s]\n", dest);

	dest[0] = 'B';
	/* 2 */ printf("n2 (10) = [%zu]\n", ft_strlcat(dest, src, 1));
	printf("dest2 (B)= [%s]\n", dest);

	memset(dest, 'B', 4);
	/* 3 */ printf("n3 (%lu) = [%zu]\n", 3 + strlen(src), ft_strlcat(dest, src, 3));
	printf("dest3 (BBBB)= [%s]\n", dest);

	/* 4 */ printf("n4 (13) = [%zu]\n", ft_strlcat(dest, src, 6));
	printf("dest4 (BBBBA)= [%s]\n", dest);

	memset(dest, 'C', 5);
	/* 5 */ printf("n5  (14) = [%zu]\n", ft_strlcat(dest, src, -1));
	printf("dest5 (CCCCCAAAAAAAAA)= [%s]\n", dest);

	memset(dest, 'C', 15);
	/* 6 */ printf("n6  (24) = [%zu]\n", ft_strlcat(dest, src, 17));
	printf("dest6 (CCCCCCCCCCCCCCCA)= [%s]\n", dest);

	memset(dest, 0, 30);
	/* 7 */ printf("n7  (%lu) = [%zu]\n", strlen(src), ft_strlcat(dest, src, 1));
	printf("dest7 ()= [%s]\n", dest);
	
	memset(dest, 0, 30); memset(dest, '1', 10);
	/* 8 */ printf("n8  (%lu) = [%zu]\n", strlen(src) + 5, ft_strlcat(dest, src, 5));
	printf("dest8 (1111111111)= [%s]\n", dest);
	
	memset(dest, 0, 30); memset(dest, '1', 10);
	/* 9 */ printf("n9  (%lu) = [%zu]\n", strlen(src) + 5, ft_strlcat(dest, src, 5));
	printf("dest9 (1111111111)= [%s]\n", dest);
	
	memset(dest, 0, 30); memset(dest, '1', 10);
	/* 10 */ printf("n10 (10) = [%zu]\n", ft_strlcat(dest, "", 15));
	printf("dest10(1111111111)= [%s]\n", dest);
	
	memset(dest, 0, 30);
	/* 11 */ printf("n11 (0) = [%zu]\n", ft_strlcat(dest, "", 42));
	printf("dest11()= [%s]\n", dest);
	
	memset(dest, 0, 30);
	/* 12 */ printf("n12 (0) = [%zu]\n", ft_strlcat(dest, "", 0));
	printf("dest12()= [%s]\n", dest);
	
	memset(dest, 0, 30);
	/* 13 */ printf("n13 (3) = [%zu]\n", ft_strlcat(dest, "123", 1));
	printf("dest13()= [%s]\n", dest);
	
	memset(dest, 0, 30);
	/* 14 */ printf("n14 (3) = [%zu]\n", ft_strlcat(dest, "123", 2));
	printf("dest14(1)= [%s]\n", dest);
	
	memset(dest, 0, 30);
	/* 15 */ printf("n15 (3) = [%zu]\n", ft_strlcat(dest, "123", 3));
	printf("dest15(12)= [%s]\n", dest);
	
	memset(dest, 0, 30);
	/* 16 */ printf("n16 (3) = [%zu]\n", ft_strlcat(dest, "123", 4));
	printf("dest16(123)= [%s]\n", dest);
	
	memset(dest, 0, 30);
	/* 17 */ printf("n17 (3) = [%zu]\n", ft_strlcat(dest, "123", 0));
	printf("dest17()= [%s]\n", dest);
	
	return (0);
}

