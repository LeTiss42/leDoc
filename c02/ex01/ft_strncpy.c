/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:24:36 by mravera           #+#    #+#             */
/*   Updated: 2021/09/13 19:25:57 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
		dest[i++] = 0;
	return (dest);
}

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	char	src[] = "abcde";
	char	src2[] = "abcde";
	char	dest[] = "12345678901234567890";
	char	dest2[] = "12345678901234567890";
	int 	n = atoi(argv[1]);

	printf("[%s] ==> ", dest);
	printf("[%s] 15eme =>", strncpy(dest, src, n));
	printf("[%c]\n", dest[14]); 
	printf("[%s] ==> ", dest2);
	printf("[%s] 15eme =>", ft_strncpy(dest2, src2, n));
	printf("[%c]\n", dest2[14]);
	return (0);
}

