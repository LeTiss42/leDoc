/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:28:39 by mathis            #+#    #+#             */
/*   Updated: 2021/12/03 21:40:37 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(s);
	while ((start + i) < slen && i < len && s[start + i])
		i++;
	res = malloc(i + 1);
	if (!res)
		return (0);
	res[i] = 0;
	slen = 0;
	while (slen < i)
	{
		res[slen] = s[start + slen];
		slen++;
	}
	return (res);
}
/*
int main(void)
{
	char * s = ft_substr("tripouille", 1, 1);
	printf("res 3 = %s\n", s);

	s = ft_substr("tripouille", 100, 1);
	printf("res 5 = %s\n", s);

	char * str = ft_strdup("1");
	s = ft_substr(str, 42, 42000000);
	printf("res 7= %s\n", s);

	return(0);
}
*/
