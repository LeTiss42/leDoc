/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:24:18 by mravera           #+#    #+#             */
/*   Updated: 2021/11/23 16:10:37 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[i] != 0 && i < (int)len)
	{
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == 0 && (i + j < (int)len))
				return (&((char *)haystack)[i]);
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

int	main(int argc, char **argv)
{
	(void)	argc;
	char	dest[] = "klsjdhfkjahcocoucoukshjwbonjouhefcoucouoshdhdjlakjsdbonjour";
	char	src[] = "bonjour";
	char	dest2[] = "klsjdhfkjahcocoucoukshjwbonjouhefcoucouoshdhdjlakjsdbonjour";
	char	src2[] = "bonjour";
	size_t	n = (size_t)atoi(argv[1]);

	printf("s1 = [%s]\n", dest);
	printf("s2 = [%s]\n", src);
	printf("vrai = [%s]\n", strnstr(dest, src, n));
	printf("mien = [%s]\n", ft_strnstr(dest2, src2, n));
	return (0);
}
*/
