/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:33:57 by mravera           #+#    #+#             */
/*   Updated: 2021/11/24 15:59:20 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((dst > src) && (dst <= src + len))
	{
		while (i <= len)
		{
			*((unsigned char *)(dst + (len - i))) = *((unsigned char *)(src + (len - i)));
			i++;
		}
		return (dst);
	}
	else
	{
		while (i < len)
		{
			*((unsigned char *)(dst + i)) = *((unsigned char *)(src + i));
			i++;
		}
		return (dst);
	}

}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void) argc;
	char dest1[] = "12345678901234567890";
	char dest2[] = "12345678901234567890";
	char src[] = "ouistiti";

	printf("originale  ==> %s\n", src);
	printf("memmove    ==> %s\n", memmove(dest1, src, atoi(argv[1])));
	printf("ft_memmove ==> %s\n", ft_memmove(dest2, src, atoi(argv[1])));
	return (0);
}

