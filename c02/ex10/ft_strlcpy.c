/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:28:32 by mravera           #+#    #+#             */
/*   Updated: 2021/09/09 12:12:10 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != 0)
			i++;
		return (i);
	}
	while (src[i] != 0 && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	i = 0;
	while (src[i] != 0)
		i++;
	return (i);
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	char	src[] = "abcdefghij";
	char	src2[] = "abcdefghij";
	char	dest[4294967295];
	char	dest2[4294967295];
	int 	n = atoi(argv[1]);

	printf("[%s] ==> ", dest);
	printf("[%lu] 15eme =>", strlcpy(dest, src, n));
	printf("[%c]\n", dest[14]);
	printf("[%s] sizeof(dest)=> %lu\n", dest, sizeof(dest));

	printf("[%s] ==> ", dest2);
	printf("[%u] 15eme =>", ft_strlcpy(dest2, src2, n));
	printf("[%c]\n", dest2[14]);
	printf("[%s] sizeof(dest2) => %lu\n", dest2, sizeof(dest2));
	return (0);
}
*/
