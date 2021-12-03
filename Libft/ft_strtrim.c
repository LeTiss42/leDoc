/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 01:54:06 by mathis            #+#    #+#             */
/*   Updated: 2021/12/03 21:47:30 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*res;

	i = ft_strlen(s1);
	j = 0;
	while (ft_strchr(set, s1[j]) && j < i)
		j++;
	while (ft_strchr(set, s1[i]) && i > 0)
		i--;
	if (i >= j && i != 0)
		len = i - j + 1;
	else
		len = 0;
	res = malloc(len + 1);
	if (res == 0)
		return (0);
	while (j <= i && i != 0)
	{
		*res = s1[j++];
		res++;
	}
	*res = 0;
	return (res - len);
}
/*
int main(int argc, char **argv)
{
	char *s1 = argv[1];
	char *set = argv[2];
	char *res;
	(void) argc;

	printf("s1 = %s\n", s1);
	printf("set= %s\n", set);
	res = ft_strtrim(s1, set);
	printf("res = %s\n", res);
	free(res);
	
	return(0);
}
*/
