/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:33:57 by mravera           #+#    #+#             */
/*   Updated: 2021/11/24 19:34:42 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((dst > src) && (dst <= src + len))
	{
		while (i < len)
		{
			*((unsigned char *)(dst + (len - 1 - i))) = *((unsigned char *)(src + (len - 1 - i)));
			i++;
		}
		return (dst);
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
		return (dst);
	}
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 68, 67, 68, 69, 0, 45};
	printf("memmove    ==> %s\n", memmove(sResult + 1, sResult, 2));
	printf("ft_memmove ==> %s\n", ft_memmove(sResult2 + 1, sResult2, 2));
	return (0);
}
*/
